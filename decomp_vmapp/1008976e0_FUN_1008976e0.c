
undefined8
FUN_1008976e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_28;
  
  local_28 = 0;
  plVar3 = (long *)FUN_100896260();
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x38) == 0)) {
      FUN_100887ce0(6,0x93,0x96,"pmeth_gn.c",0x7b);
    }
    else {
      *(undefined4 *)(plVar3 + 4) = 4;
      if ((*(code **)(lVar1 + 0x30) == (code *)0x0) ||
         (iVar2 = (**(code **)(lVar1 + 0x30))(plVar3), 0 < iVar2)) {
        iVar2 = FUN_1008964c0(plVar3,0xffffffff,4,6,param_4,param_3);
        if (0 < iVar2) {
          FUN_100897580(plVar3,&local_28);
        }
      }
      else {
        *(undefined4 *)(plVar3 + 4) = 0;
      }
    }
    FUN_1008963e0(plVar3);
    return local_28;
  }
  return 0;
}

