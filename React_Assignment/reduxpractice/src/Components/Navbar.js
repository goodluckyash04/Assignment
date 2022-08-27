import React from 'react'
import { useSelector } from 'react-redux'

export default function Navbar() {
  const cart = useSelector((state) => state.cart)
  const balance = useSelector((state) => state.balance)

  return (
    <nav className="navbar navbar-expand-lg bg-light">
          <div className="container-fluid">
            <a className="navbar-brand" href="#">Navbar</a>
            <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
              <span className="navbar-toggler-icon" />
            </button>
            <div className="collapse navbar-collapse justify-content-between" id="navbarNav">
              <ul className="navbar-nav">
                <li className="nav-item">
                  <a className="nav-link active" aria-current="page" href="#">Home</a>
                </li>
                <li className="nav-item">
                  <a className="nav-link" href="#">Features</a>
                </li>
              </ul>
              <ul className="navbar-nav">
              <li className="nav-item">
                  <span className="nav-link link-primary active" href="#">Cart: {cart}</span>
                </li>
                <li className="nav-item">
                  <span className="nav-link link-primary" href="#">Balance: {balance}</span>
                </li>
              </ul>
            </div>
          </div>
        </nav>
  
  )
}
       