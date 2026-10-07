
undefined1 FUN_1005ae880(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 uVar3;
  int local_24;
  
  local_24 = 0;
  uVar1 = ((ulong)*(uint *)(param_1 + 0xcc) - 1) +
          (ulong)(uint)(*(int *)(param_2 + 7) * *(int *)(param_1 + 200)) +
          *(long *)(param_1 + 0x10c0);
  cVar2 = FUN_100707fb0(param_1 + 0x28,*param_2,*(int *)(param_1 + 200),&local_24,
                        uVar1 - uVar1 % (ulong)*(uint *)(param_1 + 0xcc));
  if ((cVar2 == '\0') || (uVar3 = 1, local_24 != *(int *)(param_1 + 200))) {
    uVar3 = 0;
    FUN_1008e3970("","vdisk",0,"Unable to read group[%u] (read %u, expected %u), err = %u",
                  *(undefined4 *)(param_2 + 7),local_24,*(int *)(param_1 + 200),
                  *(undefined4 *)(param_1 + 0x3c));
  }
  return uVar3;
}

