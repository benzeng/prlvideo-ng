
undefined8 FUN_1003bab80(undefined4 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 ******local_90;
  undefined8 ******local_88;
  undefined8 ******local_80;
  undefined8 ******local_78;
  undefined8 ******local_70;
  undefined8 ******local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  undefined8 ******local_30;
  undefined8 ******local_28;
  
  *(undefined8 *)(param_1 + 2) = param_3;
  *(long *)(param_1 + 4) = param_2;
  *param_1 = 0;
  FUN_1003bae20();
  FUN_10038e8e0(*(undefined8 *)(param_1 + 2),"void main()\n{\ninit_input_registers();\n");
  plVar2 = *(long **)(param_2 + 0xf0);
  while( true ) {
    lVar4 = *plVar2;
    if (lVar4 == 0) {
      if (*(char *)(param_1 + 6) != '\0') {
        FUN_10038e8e0(*(undefined8 *)(param_1 + 2),"\n");
        local_38 = 0;
        local_40 = 0;
        local_3e = 0;
        local_3a = 0;
        local_3c = 0;
        local_42 = 0;
        local_48 = 0;
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        local_88 = (undefined8 ******)&local_38;
        local_44 = 0x3e;
        local_90 = &local_90;
        local_80 = local_88;
        local_78 = &local_90;
        local_70 = &local_78;
        local_68 = &local_78;
        local_30 = &local_90;
        local_28 = &local_90;
        FUN_1003bbba0(param_1,&local_90);
        if (local_58 != 0) {
          if (*(undefined8 ********)(local_58 + 0x30) == &local_90) {
            *(undefined8 ******)(local_58 + 0x30) = *local_88;
          }
          if (*(undefined8 ********)(local_58 + 0x28) == &local_90) {
            *(undefined8 ******)(local_58 + 0x28) = *local_80;
          }
        }
        local_80[1] = local_88;
        local_88[2] = local_80;
        local_68[1] = local_70;
        local_70[2] = local_68;
        if (local_50 != 0) {
          if (*(long *)(local_50 + -8) != 0) {
            lVar4 = *(long *)(local_50 + -8) << 6;
            do {
              lVar1 = *(long *)(local_50 + -0x20 + lVar4);
              *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(local_50 + -0x28 + lVar4);
              *(long *)(*(long *)(local_50 + -0x28 + lVar4) + 0x10) = lVar1;
              lVar1 = local_50 + -0x30 + lVar4;
              *(long *)(local_50 + -0x28 + lVar4) = lVar1;
              *(long *)(local_50 + -0x20 + lVar4) = lVar1;
              lVar4 = lVar4 + -0x40;
            } while (lVar4 != 0);
          }
          local_88 = &local_90;
          local_80 = &local_90;
          local_70 = &local_78;
          local_68 = &local_78;
          operator_delete__((void *)(local_50 + -8));
        }
      }
      return 0;
    }
    uVar3 = FUN_1003bb5c0(param_1,lVar4);
    if ((int)uVar3 != 0) break;
    plVar2 = *(long **)(lVar4 + 8);
  }
  return uVar3;
}

