
bool FUN_100113e40(long param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined8 in_R9;
  
  iVar1 = FUN_100683330(param_1 + 0xc,0x6004780c,&stack0xffffffffffffffec,4,0,in_R9,
                        CONCAT44(param_2,in_EAX));
  if (iVar1 != 0) {
    FUN_1008e3970("","vm",0,"Cpu Affinity configuration failed");
  }
  return iVar1 == 0;
}

