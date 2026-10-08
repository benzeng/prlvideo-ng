
long FUN_100950603(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long local_48;
  uint local_1c;
  
  local_1c = (uint)*(ulong *)(param_1 + 0x18) & 0xf;
  if ((*(ulong *)(param_1 + 0x18) & 0xf) == 0) {
    local_1c = 1;
  }
  if (*(long *)(param_1 + 0x10) < 1) {
    lVar4 = *(long *)(param_1 + 0x10) + 1;
    if (lVar4 < 0) {
      lVar4 = *(long *)(param_1 + 0x10) + 4;
    }
    lVar1 = *(long *)(param_1 + 0x10) + 1;
    lVar2 = *(long *)(param_1 + 0x10) + 1;
    if ((((*(ulong *)(param_1 + 0x10) & 3) == 0) &&
        (lVar3 = *(long *)(param_1 + 0x10),
        lVar3 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar3),8) + lVar3 >> 6) -
                (lVar3 >> 0x3f)) * -100 != 0)) ||
       (lVar3 = *(long *)(param_1 + 0x10),
       lVar3 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar3),8) + lVar3 >> 8) -
               (lVar3 >> 0x3f)) * -400 == 0)) {
      local_68 = (&DAT_101c9bc80)[(int)(local_1c - 1)];
    }
    else {
      local_68 = (&DAT_101c9bc20)[(int)(local_1c - 1)];
    }
    return *(long *)(param_1 + 0x10) * 0x16d +
           ((lVar4 >> 2) -
           ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 6) - (lVar1 >> 0x3f)
           )) + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar2),8) + lVar2 >> 8) -
                (lVar2 >> 0x3f)) + local_68;
  }
  lVar4 = *(long *)(param_1 + 0x10) + -1;
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 0x10) + 2;
  }
  lVar1 = *(long *)(param_1 + 0x10) + -1;
  lVar2 = *(long *)(param_1 + 0x10) + -1;
  if ((((*(ulong *)(param_1 + 0x10) & 3) == 0) &&
      (lVar3 = *(long *)(param_1 + 0x10),
      lVar3 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar3),8) + lVar3 >> 6) -
              (lVar3 >> 0x3f)) * -100 != 0)) ||
     (lVar3 = *(long *)(param_1 + 0x10),
     lVar3 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar3),8) + lVar3 >> 8) -
             (lVar3 >> 0x3f)) * -400 == 0)) {
    local_48 = (&DAT_101c9bc80)[(int)(local_1c - 1)];
  }
  else {
    local_48 = (&DAT_101c9bc20)[(int)(local_1c - 1)];
  }
  return *(long *)(param_1 + 0x10) * 0x16d +
         ((lVar4 >> 2) -
         ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 6) - (lVar1 >> 0x3f)))
         + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar2),8) + lVar2 >> 8) - (lVar2 >> 0x3f)
           ) + local_48 + -0x16d;
}

