
int _xmlAutomataSetFinalState(xmlAutomataPtr am,xmlAutomataStatePtr state)

{
  undefined4 local_1c;
  
  if ((am == (xmlAutomataPtr)0x0) || (state == (xmlAutomataStatePtr)0x0)) {
    local_1c = -1;
  }
  else {
    *(undefined4 *)state = 2;
    local_1c = 0;
  }
  return local_1c;
}

