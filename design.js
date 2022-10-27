const increase = document.querySelector('#increment')
const decrease = document.querySelector("#decrement")
const element = document.getElementById('counter')

const refUl = document.querySelector('#list-item')
let counter = 0
function increasecounter(){
    counter++
    element.innerText = counter

    // create element
    const li = document.createElement("li")
    li.setAttribute("data-counter",counter)
//      const b = document.createElement("b")

//     const NodeText = document.createTextNode('name ')
//     b.appendChild(NodeText)

//     const NodeText2 = document.createTextNode(counter)
//     li.appendChild(b)
//     li.appendChild(NodeText2) 
    
//    *** EQUIVALENT TO THE FOLLOWING LINE ***
    

    li.innerHTML = '<b> Name </b>' + counter
    console.log(li)
   
    // append element
    refUl.appendChild(li)

}

function decreasecounter(){

   const li = refUl.querySelector('[data-counter="'+counter+'"]') 
   
   const number = parseInt(li.getAttribute('data-counter'),10) //here number is a string so we need to parse this as an integer the reason we write 10 here because we want to parse this number in base 10 so it is recommended to write 10 there
   if(number > 0){
   li.remove()
   }

    counter--
    element.innerText = counter
}
increase.addEventListener('click',increasecounter)
decrease.addEventListener('click',decreasecounter)



// const Users = () => {
//     const data = [
//       { id: 1, name: "John Doe" },
//       { id: 2, name: "Victor Wayne" },
//       { id: 3, name: "Jane Doe" },
//     ];
  
//     return (
        
//       <div className="users">
//         {data.map((user) => (
//           <div className="user">{user}</div>
//         ))}
//       </div>
      
//     );
//   };