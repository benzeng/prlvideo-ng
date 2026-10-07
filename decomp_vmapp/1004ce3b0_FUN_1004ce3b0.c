
undefined8 FUN_1004ce3b0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_b0;
  int local_ac;
  undefined8 local_a8;
  uint local_a0;
  
  if (*(short *)(param_2 + 0x16) == 0) {
    return 0xf0000003;
  }
  lVar2 = FUN_1002a6120(param_2,0,1);
  if (lVar2 == 0) {
    return 0xf0000003;
  }
  uVar1 = *(uint *)(lVar2 + 8);
  if (uVar1 < 0x90) {
    return 0xf0000003;
  }
  FUN_1002a5990(lVar2,0,&local_b0,0x90);
  if (uVar1 < local_b0) {
    return 0xf0000003;
  }
  if (local_b0 < 0x90) {
    return 0xf0000003;
  }
  if (local_b0 == 0x90) {
    if (local_ac == 3) {
      local_a0 = 1;
    }
    else if (local_ac == 2) {
      local_a0 = (uint)(DAT_10111cc70 == 0);
    }
    else {
      if (local_ac != 1) goto LAB_1004ce4ad;
      local_a0 = DAT_1011bc074;
    }
    local_a8 = 0x9000000004;
    uVar3 = 0;
    FUN_1002a5a50(lVar2,0,&local_b0,0x90);
    *(uint *)(lVar2 + 0x10) = local_b0;
  }
  else {
LAB_1004ce4ad:
    local_a8 = 0x9000000004;
    FUN_1002a5a50(lVar2,0,&local_b0,0x90);
    *(undefined4 *)(lVar2 + 0x10) = 0x90;
    uVar3 = 0xf0000021;
  }
  return uVar3;
}

