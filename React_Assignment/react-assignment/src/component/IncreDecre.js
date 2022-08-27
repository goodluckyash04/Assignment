import React,{useState} from 'react'

export default function IncreDecre() {
    const [count, setCount] = useState(0)
    
  return (
        <div style={{textAlign:"center"}}>
        <h1 >React Web Counter</h1>
           <h3>{count}</h3>
           <button style={{margin:"20px"}} onClick={()=>{setCount(count+1)}}>Increament</button>
           <button onClick={()=>{count!=0?setCount(count-1):setCount(0)}}>Decreament</button><br />
           <button onClick={()=>{setCount(0)}}>Reset</button>
    </div>
  )
}
