
ulong FUN_1002d7e00(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(param_2 + 0x450);
  if (iVar4 == 0xe1) {
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] process control OUT",param_1 + 0xcf);
    }
    if (*(char *)(param_1 + 0xf7) < '\0') goto joined_r0x0001002d7fe0;
LAB_1002d7f6f:
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] ControlInOut",param_1 + 0xcf);
    }
    if ((((*(byte *)(param_1 + 0x91) & 2) == 0) && (*(int *)(param_2 + 0x450) == 0x69)) &&
       (*(uint *)(param_2 + 0x43c) < (uint)*(ushort *)(param_1 + 0xfd))) {
      *(uint *)(param_2 + 0x43c) = (uint)*(ushort *)(param_1 + 0xfd);
    }
    if (*(uint *)(param_2 + 0x438) < *(uint *)(param_2 + 0x43c)) {
      *(uint *)(param_2 + 0x43c) = *(uint *)(param_2 + 0x438);
    }
    uVar7 = 1;
LAB_1002d800c:
    uVar6 = FUN_1002d81f0(param_1,param_2,uVar7);
  }
  else {
    if (iVar4 == 0x69) {
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] process control IN",param_1 + 0xcf);
      }
      if ((*(char *)(param_1 + 0xf7) < '\0') && (*(short *)(param_1 + 0xfd) != 0))
      goto LAB_1002d7f6f;
joined_r0x0001002d7fe0:
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] ControlAck",param_1 + 0xcf);
      }
      uVar7 = 2;
      goto LAB_1002d800c;
    }
    if (iVar4 != 0x2d) {
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] INVALID PID",param_1 + 0xcf);
      }
      *(undefined4 *)(param_2 + 0x468) = 4;
      goto LAB_1002d801b;
    }
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] ControlSetup",param_1 + 0xcf);
    }
    *(undefined8 *)(param_1 + 0xf7) = *(undefined8 *)(param_2 + 0x4d8);
    uVar6 = FUN_1002d81f0(param_1,param_2,0);
    *(undefined4 *)(param_2 + 0x454) = *(undefined4 *)(param_2 + 0x43c);
  }
  if ((int)uVar6 == 0) {
    return uVar6;
  }
LAB_1002d801b:
  if ((1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
    FUN_1002da980(2,param_2);
  }
  uVar5 = *(uint *)(param_2 + 0x470);
  *(undefined4 *)(param_2 + 0x464) = 1;
  LOCK();
  piVar1 = (int *)(*(long *)(param_1 + 0xc0) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  puVar2 = (uint *)(param_1 + 8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if ((uVar5 & 4) == 0) {
    return (ulong)uVar3;
  }
  uVar6 = FUN_1002c9070(param_2);
  return uVar6;
}

