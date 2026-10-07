
void FUN_1003e0fb0(long *param_1,int param_2)

{
  long lVar1;
  undefined2 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  size_t sVar5;
  undefined8 local_28;
  
  lVar1 = param_1[0xb];
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar4 = *(uint *)(param_1 + 0x19), uVar4 == 0xffffffff)) {
    uVar4 = (uint)CONCAT11((char)*(undefined2 *)(lVar1 + 7),
                           (char)((ushort)*(undefined2 *)(lVar1 + 7) >> 8));
  }
  if (((*(byte *)(lVar1 + 1) & 1) == 0) || (*(char *)(lVar1 + 4) != '\x10')) {
LAB_1003e1007:
                    /* WARNING: Could not recover jumptable at 0x0001003e1027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
    return;
  }
  if ((uVar4 & 0xffff) < 4) goto LAB_1003e1007;
  local_28._2_6_ = (undefined6)((ulong)in_RAX >> 0x10);
  if (param_2 != 2) {
    if (param_2 == 1) {
      local_28 = CONCAT62(local_28._2_6_,0x202);
      goto LAB_1003e103b;
    }
    if (param_2 == 0) {
      local_28 = CONCAT62(local_28._2_6_,0x200);
      goto LAB_1003e103b;
    }
  }
  local_28 = CONCAT62(local_28._2_6_,3);
LAB_1003e103b:
  local_28._0_4_ = (uint)(ushort)local_28;
  bVar3 = 4;
  if ((uVar4 & 0xffff) < 9) {
    bVar3 = (char)uVar4 - 4;
  }
  sVar5 = 4;
  if (bVar3 < 5) {
    sVar5 = (ulong)bVar3;
  }
  _memcpy((void *)(param_1[9] + 4),&local_28,sVar5);
  puVar2 = (undefined2 *)param_1[9];
  *puVar2 = CONCAT11((char)(bVar3 + 2),(char)(bVar3 + 2 >> 8));
  puVar2[1] = 0x404;
                    /* WARNING: Could not recover jumptable at 0x0001003e10a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,bVar3 + 4,uVar4 & 0xffff);
  return;
}

