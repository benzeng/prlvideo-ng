
undefined8 FUN_100528ca0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *local_38;
  
  uVar5 = 0;
  do {
    puVar6 = (undefined8 *)param_1[uVar5 + 1];
    while (puVar6 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar6;
      lVar2 = puVar6[10];
      local_38 = puVar6;
      if ((lVar2 != 0) && (param_2 == 0 || lVar2 == param_2)) {
        plVar3 = (long *)*param_1;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,0xf0000000);
        }
        puVar6[10] = 0;
        *(uint *)(local_38 + 0x12) = *(uint *)(local_38 + 0x12) | 0x10;
        local_38[0xe] = 0;
        local_38[0xd] = 0;
        local_38[0xc] = 0;
        local_38[0xb] = 0;
        if (param_2 != 0) {
          return 1;
        }
      }
      puVar4 = local_38;
      lVar2 = local_38[0x11];
      puVar6 = puVar1;
      if ((lVar2 != 0) && (param_2 == 0 || lVar2 == param_2)) {
        plVar3 = (long *)*param_1;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,0xf0000000);
        }
        puVar4[0x11] = 0;
        FUN_100529630(param_1 + 0x108,&local_38);
        if (param_2 != 0) {
          return 1;
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      return 0;
    }
  } while( true );
}

