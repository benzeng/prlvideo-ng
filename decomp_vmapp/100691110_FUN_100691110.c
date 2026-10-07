
undefined4 FUN_100691110(long *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if (*(int *)(param_2 + 0xc) == 0) {
    FUN_1008e3970("","dimg",0,"Error: used blocks bitmap is invalid!");
    uVar5 = 0x80000003;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x1a0))
                      (param_1,2,param_2,param_3,local_24,local_28,local_2c,local_30,param_4);
    if (param_1[0x301e] != 0) {
      lVar1 = param_1[0x301c];
      plVar2 = (long *)param_1[0x301d];
      lVar3 = *plVar2;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar3;
      param_1[0x301e] = 0;
      while (plVar2 != param_1 + 0x301c) {
        plVar4 = (long *)plVar2[1];
        operator_delete(plVar2);
        plVar2 = plVar4;
      }
    }
  }
  return uVar5;
}

