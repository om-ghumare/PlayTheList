import zipfile
from fastapi.responses import FileResponse
from fastapi import FastAPI

# from starlette.background import BackgroundTasks

import subprocess

from utils import remove_file, zipdir
app = FastAPI()



@app.get("/")
def read_root():
    return {"Let's": "Go"}

@app.post("/api/link")
def add_link(link: str):
    subprocess.run(["spotify_dl", "-l", link, "-o", "music"])
    with zipfile.ZipFile('music.zip', 'w', zipfile.ZIP_DEFLATED) as zipf:
        zipdir('music/', zipf)
    return FileResponse(path="music.zip", filename="music.zip",media_type="application/zip")
        