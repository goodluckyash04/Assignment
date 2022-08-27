//reducer function also use creater reducer
const initialState = {
    cart:0,
    balance:0,
}
export const updatecart=(state=initialState.cart,action)=>{
    if(action.type==="increase"){
        return state+action.payload
    }
   else if(action.type==="decrease"){
        if(state !== 0) {
            return  state-action.payload
        }
    }
    else{
        return state;
    }
}
export const updatebalance=(state=initialState.balance,action)=>{
    if(action.type==="deposite"){
        return state+action.payload
    }
   else if(action.type==="withdraw"){
        if(state !== 0 && action.payload<state) {
            return  state-action.payload
        }else if(action.payload>state){
            alert("Insufficiant Balance.")
        }
    }
    else{
        return state;
    }
}

