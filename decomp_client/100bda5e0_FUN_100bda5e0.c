
int FUN_100bda5e0(undefined4 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1[0xa6] & 3) != 1) {
    uVar4 = 0x16d;
    uVar5 = 0xa4b;
LAB_100bda672:
    FUN_100c62ee0(0x14,0x13b,uVar4,"t1_lib.c",uVar5);
    return -1;
  }
  if (param_1[0xa7] != 0) {
    uVar4 = 0x16e;
    uVar5 = 0xa51;
    goto LAB_100bda672;
  }
  uVar2 = FUN_100be45f0(param_1);
  if (((uVar2 & 0x3000) != 0) || (param_1[0xb] != 0)) {
    uVar4 = 0xf4;
    uVar5 = 0xa57;
    goto LAB_100bda672;
  }
  puVar3 = (undefined2 *)FUN_100bf3540(0x25,"t1_lib.c",0xa6b);
  *puVar3 = 1;
  *(undefined1 *)(puVar3 + 1) = 0x12;
  *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)param_1 + 0x2a1);
  *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(param_1 + 0xa8);
  iVar1 = FUN_100c62190((long)puVar3 + 5,0x10);
  if (iVar1 < 0) {
    uVar4 = 0xa75;
  }
  else {
    iVar1 = FUN_100c62190((long)puVar3 + 0x15,0x10);
    if (-1 < iVar1) {
      iVar1 = FUN_100bd10c0(param_1,0x18,puVar3,0x25);
      if (-1 < iVar1) {
        if (*(code **)(param_1 + 0x26) != (code *)0x0) {
          (**(code **)(param_1 + 0x26))
                    (1,*param_1,0x18,puVar3,0x25,param_1,*(undefined8 *)(param_1 + 0x28));
        }
        param_1[0xa7] = 1;
      }
      goto LAB_100bda78c;
    }
    uVar4 = 0xa7b;
  }
  FUN_100c62ee0(0x14,0x13b,0x44,"t1_lib.c",uVar4);
  iVar1 = -1;
LAB_100bda78c:
  FUN_100bf3910(puVar3);
  return iVar1;
}

