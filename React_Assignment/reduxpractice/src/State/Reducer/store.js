import { configureStore } from "@reduxjs/toolkit";
import {product, updatebalance, updatecart} from "../reducerfunctions";

const rootReducer=()=>({    //combined reducer
    cart:updatecart,
    balance:updatebalance,
    product:product
})

export const store=configureStore({reducer:rootReducer()})
