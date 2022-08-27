import { configureStore } from "@reduxjs/toolkit";
import {updatebalance, updatecart} from "../reducerfunctions";

const rootReducer=()=>({    //combined reducer
    cart:updatecart,
    balance:updatebalance
})

export const store=configureStore({reducer:rootReducer()})
