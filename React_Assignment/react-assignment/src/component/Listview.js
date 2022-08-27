import React, { Component } from 'react'

export default class Listview extends Component {
    list=["Basic C Programs",
        "The Fundamentals of Computers",
        "Web Designing Courses",
        "VFX and 3D Animation courses",
        "Microsoft Office",
        "Operating Systems",
        "Animation Courses",
        "Tally Course",
        "Adobe Photoshop",
        "Graphic Design Courses",
        "Cyber Security Courses",
        "Accounting Software",
        "Software Courses",
        "Hardware and Networking courses"]
  render() {
    return (
      <div>
        <h1 style={{textAlign:"center"}}>Basic Computer Courses List</h1>
        <div style={{marginLeft:"30vw"}} > 
       {this.list.map((x,i)=>{
        return <p style={{fontSize:"20px"}} key={i}>{i+1}. {x}</p>
       })}
        </div>
      </div>
    )
  }
}
