
undefined8 FUN_1003dfb00(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 local_30 [8];
  long local_28;
  long local_20;
  
  if (param_1[4] == 0) {
    uVar5 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1);
    plVar3 = (long *)(**(code **)(*(long *)param_1[4] + 0x30))();
    param_1[3] = (long)plVar3;
    if (plVar3 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar1 = *(uint *)((long)param_1 + 0xc);
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if ((uVar1 != uVar4) && (-1 < DAT_1011c568c)) {
        uVar2 = *(undefined4 *)((long)param_1 + 0xc);
        uVar5 = (**(code **)(*(long *)param_1[3] + 0x18))();
        FUN_1008e3970("","USB",0,"[UVC] Incorrect frame size! (%d >< %ld)",uVar2,uVar5);
      }
      (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3],local_30);
      if (DAT_1011ccc18 != (code *)0x0) {
        (*DAT_1011ccc18)(1,0x22,local_20 << 8);
        if (DAT_1011ccc18 != (code *)0x0) {
          (*DAT_1011ccc18)(1,0x22,(local_20 - local_28) * 0x100);
        }
      }
      plVar3 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))();
      *plVar3 = local_20;
      uVar5 = 1;
    }
  }
  return uVar5;
}

