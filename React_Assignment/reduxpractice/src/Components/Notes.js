import React from 'react'
import { Link } from 'react-router-dom'
import Details from './Details'

export default function Notes() {
  return (
    <div className="container-fluid mt-2">
    <div className="row">
      <div className="col-2">
        <Details/>
      </div>
      <div className="col-10 overflow-auto" style={{maxHeight:"90vh"}}>
      <div className='mt-3 text-center'>
      <button className='btn btn-primary '><Link className='nav-link' to="/addnote">Add Notes</Link></button>
        </div>
      </div>
    </div>
   </div>
  )
}
