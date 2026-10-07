
undefined1 FUN_10008ac10(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  undefined1 uVar6;
  
  uVar6 = 1;
  if (((long *)param_1[0xc] != (long *)0x0) && ((char)param_1[0x1b] == '\0')) {
    cVar4 = (**(code **)(*(long *)param_1[0xc] + 0x10))();
    if (cVar4 != '\0') {
      lVar2 = param_1[1];
      lVar3 = *param_1;
      FUN_1000bea50(param_2,0xf);
      *(undefined4 *)(param_1 + 0x11) = 0;
      *(int *)(param_1 + 0xf) = (int)((ulong)(lVar2 + lVar3) >> 0xc);
      *(undefined4 *)(param_1 + 0x10) = 0x5f;
      *(undefined4 *)((long)param_1 + 0x84) = 0xf;
      *(undefined4 *)((long)param_1 + 0x7c) = 0xf;
      plVar5 = (long *)param_1[0xc];
      if (param_1[0x17] != 0) {
        FUN_100546700();
        plVar5 = (long *)param_1[0xc];
      }
      cVar4 = (**(code **)(*plVar5 + 0x28))();
      if (cVar4 == '\0') {
        uVar6 = 0;
      }
      else {
        FUN_1000cfb80(*(undefined8 *)(param_2 + 0x109c8));
        (**(code **)(*(long *)param_1[0xc] + 0x30))();
        if (*(char *)((long)param_1 + 0x34) == '\0') {
          plVar5 = operator_new(0x18);
          lVar2 = param_1[0xc];
          uVar1 = *(undefined4 *)((long)param_1 + 0x2c);
          *plVar5 = lVar2;
          *(undefined4 *)(plVar5 + 1) = uVar1;
          plVar5[2] = (long)DAT_1011c3690;
          *(undefined8 *)(lVar2 + 0x38) = 0;
          *(undefined8 *)(lVar2 + 0x30) = 0;
          DAT_1011c3690 = plVar5;
          FUN_1000bea50(param_2,100);
          param_1[0xc] = 0;
        }
      }
    }
  }
  return uVar6;
}

