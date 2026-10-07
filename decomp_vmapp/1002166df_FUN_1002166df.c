
undefined4 FUN_1002166df(int param_1,byte *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  byte *local_38;
  int *local_30;
  int local_24;
  byte *local_20;
  
  if (param_2 == (byte *)0x0) {
    return 0xffffffff;
  }
  local_38 = param_2;
  if (param_4 != 0) {
    for (; (*local_38 == 0x20 || (((8 < *local_38 && (*local_38 < 0xb)) || (*local_38 == 0xd))));
        local_38 = local_38 + 1) {
    }
  }
  if (((*local_38 != 0x2d) && (*local_38 < 0x30)) && (0x39 < *local_38)) {
    return 1;
  }
  local_30 = (int *)FUN_1002145ad(0);
  if (local_30 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((*local_38 == 0x2d) && (local_38[1] == 0x2d)) {
    pbVar3 = local_38 + 2;
    if (*pbVar3 == 0x2d) {
      if (param_1 == 6) goto LAB_1002172a6;
      local_38 = local_38 + 3;
      local_24 = FUN_100215e9c(local_30 + 4,&local_38);
      pbVar3 = local_38;
      if ((local_24 != 0) ||
         (((((*local_38 != 0 && (*local_38 != 0x5a)) && (*local_38 != 0x2b)) && (*local_38 != 0x2d))
          || ((local_24 = FUN_100216322(local_30 + 4,&local_38), pbVar3 = local_38, local_24 != 0 ||
              (*local_38 != 0)))))) goto LAB_1002172a6;
      *local_30 = 5;
    }
    else {
      local_38 = pbVar3;
      local_24 = FUN_100215dac(local_30 + 4,&local_38);
      pbVar3 = local_38;
      if (local_24 != 0) goto LAB_1002172a6;
      if (*local_38 == 0x2d) {
        local_20 = local_38;
        local_38 = local_38 + 1;
        local_24 = FUN_100215e9c(local_30 + 4,&local_38);
        if ((local_24 == 0) && ((*local_38 == 0 || (*local_38 != 0x3a)))) {
          if ((((*(ulong *)(local_30 + 4) & 3) == 0) &&
              (lVar1 = *(long *)(local_30 + 4),
              lVar1 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 6) -
                      (lVar1 >> 0x3f)) * -100 != 0)) ||
             (lVar1 = *(long *)(local_30 + 4),
             lVar1 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 8) -
                     (lVar1 >> 0x3f)) * -400 == 0)) {
            bVar2 = ((uint)(*(ulong *)(local_30 + 6) >> 4) & 0x1f) <=
                    *(uint *)(&DAT_100b35ae0 +
                             (long)(int)(((uint)*(undefined8 *)(local_30 + 6) & 0xf) - 1) * 4);
          }
          else {
            bVar2 = ((uint)(*(ulong *)(local_30 + 6) >> 4) & 0x1f) <=
                    *(uint *)(&DAT_100b35aa0 +
                             (long)(int)(((uint)*(undefined8 *)(local_30 + 6) & 0xf) - 1) * 4);
          }
          if (bVar2) {
            if (((((*local_38 != 0) && (*local_38 != 0x5a)) && (*local_38 != 0x2b)) &&
                (pbVar3 = local_38, *local_38 != 0x2d)) ||
               ((local_24 = FUN_100216322(local_30 + 4,&local_38), pbVar3 = local_38, local_24 != 0
                || (*local_38 != 0)))) goto LAB_1002172a6;
            *local_30 = 7;
            goto LAB_10021726c;
          }
        }
        local_38 = local_20;
      }
      if ((((*local_38 != 0) && (*local_38 != 0x5a)) &&
          ((*local_38 != 0x2b && (pbVar3 = local_38, *local_38 != 0x2d)))) ||
         ((local_24 = FUN_100216322(local_30 + 4,&local_38), pbVar3 = local_38, local_24 != 0 ||
          (*local_38 != 0)))) goto LAB_1002172a6;
      *local_30 = 6;
    }
  }
  else if ((((*local_38 < 0x30) ||
            ((0x39 < *local_38 || (local_24 = FUN_100215f92(local_30 + 4,&local_38), local_24 != 0))
            )) || ((*local_38 != 0 &&
                   (((*local_38 != 0x5a && (*local_38 != 0x2b)) && (*local_38 != 0x2d)))))) ||
          (local_24 = FUN_100216322(local_30 + 4,&local_38), local_24 != 0)) {
    local_38 = param_2;
    local_24 = FUN_100215c73(local_30 + 4,&local_38);
    pbVar3 = local_38;
    if (local_24 != 0) goto LAB_1002172a6;
    if ((((*local_38 == 0) || (*local_38 == 0x5a)) || ((*local_38 == 0x2b || (*local_38 == 0x2d))))
       && (local_24 = FUN_100216322(local_30 + 4,&local_38), local_24 == 0)) {
      pbVar3 = local_38;
      if (*local_38 != 0) goto LAB_1002172a6;
      *local_30 = 8;
    }
    else {
      pbVar3 = local_38;
      if (*local_38 != 0x2d) goto LAB_1002172a6;
      local_38 = local_38 + 1;
      local_24 = FUN_100215dac(local_30 + 4,&local_38);
      pbVar3 = local_38;
      if (local_24 != 0) goto LAB_1002172a6;
      if ((((*local_38 == 0) || (*local_38 == 0x5a)) || ((*local_38 == 0x2b || (*local_38 == 0x2d)))
          ) && (local_24 = FUN_100216322(local_30 + 4,&local_38), local_24 == 0)) {
        pbVar3 = local_38;
        if (*local_38 != 0) goto LAB_1002172a6;
        *local_30 = 9;
      }
      else {
        pbVar3 = local_38;
        if (*local_38 != 0x2d) goto LAB_1002172a6;
        local_38 = local_38 + 1;
        local_24 = FUN_100215e9c(local_30 + 4,&local_38);
        pbVar3 = local_38;
        if ((((local_24 != 0) || (*(long *)(local_30 + 4) == 0)) ||
            ((*(ulong *)(local_30 + 6) & 0xf) == 0)) ||
           (0xc < ((uint)*(undefined8 *)(local_30 + 6) & 0xf))) goto LAB_1002172a6;
        if ((((*(ulong *)(local_30 + 4) & 3) == 0) &&
            (lVar1 = *(long *)(local_30 + 4),
            lVar1 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 6) -
                    (lVar1 >> 0x3f)) * -100 != 0)) ||
           (lVar1 = *(long *)(local_30 + 4),
           lVar1 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 8) -
                   (lVar1 >> 0x3f)) * -400 == 0)) {
          if (*(uint *)(&DAT_100b35ae0 +
                       (long)(int)(((uint)*(undefined8 *)(local_30 + 6) & 0xf) - 1) * 4) <
              ((uint)(*(ulong *)(local_30 + 6) >> 4) & 0x1f)) goto LAB_1002172a6;
        }
        else if (*(uint *)(&DAT_100b35aa0 +
                          (long)(int)(((uint)*(undefined8 *)(local_30 + 6) & 0xf) - 1) * 4) <
                 ((uint)(*(ulong *)(local_30 + 6) >> 4) & 0x1f)) goto LAB_1002172a6;
        if ((((*local_38 == 0) || (*local_38 == 0x5a)) ||
            ((*local_38 == 0x2b || (*local_38 == 0x2d)))) &&
           (local_24 = FUN_100216322(local_30 + 4,&local_38), local_24 == 0)) {
          pbVar3 = local_38;
          if (*local_38 != 0) goto LAB_1002172a6;
          *local_30 = 10;
        }
        else {
          pbVar3 = local_38;
          if (*local_38 != 0x54) goto LAB_1002172a6;
          local_38 = local_38 + 1;
          local_24 = FUN_100215f92(local_30 + 4,&local_38);
          pbVar3 = local_38;
          if (local_24 != 0) goto LAB_1002172a6;
          local_24 = FUN_100216322(local_30 + 4,&local_38);
          if (param_4 != 0) {
            for (; (*local_38 == 0x20 ||
                   (((8 < *local_38 && (*local_38 < 0xb)) || (*local_38 == 0xd))));
                local_38 = local_38 + 1) {
            }
          }
          pbVar3 = local_38;
          if (((local_24 != 0) || (*local_38 != 0)) ||
             ((*(long *)(local_30 + 4) == 0 ||
              (((*(ulong *)(local_30 + 6) & 0xf) == 0 ||
               (0xc < ((uint)*(undefined8 *)(local_30 + 6) & 0xf))))))) goto LAB_1002172a6;
          if ((((*(ulong *)(local_30 + 4) & 3) == 0) &&
              (lVar1 = *(long *)(local_30 + 4),
              lVar1 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 6) -
                      (lVar1 >> 0x3f)) * -100 != 0)) ||
             (lVar1 = *(long *)(local_30 + 4),
             lVar1 + ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 8) -
                     (lVar1 >> 0x3f)) * -400 == 0)) {
            if (*(uint *)(&DAT_100b35ae0 +
                         (long)(int)(((uint)*(undefined8 *)(local_30 + 6) & 0xf) - 1) * 4) <
                ((uint)(*(ulong *)(local_30 + 6) >> 4) & 0x1f)) goto LAB_1002172a6;
          }
          else if (*(uint *)(&DAT_100b35aa0 +
                            (long)(int)(((uint)*(undefined8 *)(local_30 + 6) & 0xf) - 1) * 4) <
                   ((uint)(*(ulong *)(local_30 + 6) >> 4) & 0x1f)) goto LAB_1002172a6;
          if ((((0x17 < ((uint)(*(ulong *)(local_30 + 6) >> 9) & 0x1f)) ||
               (0x3b < ((uint)(*(ulong *)(local_30 + 6) >> 0xe) & 0x3f))) ||
              (*(double *)(local_30 + 8) < 0.0)) ||
             (((DAT_100b4aed8 <= *(double *)(local_30 + 8) ||
               ((short)((short)((int)*(undefined8 *)(local_30 + 10) << 3) >> 4) < -0x347)) ||
              (0x347 < (short)((short)((int)*(undefined8 *)(local_30 + 10) << 3) >> 4)))))
          goto LAB_1002172a6;
          *local_30 = 0xb;
        }
      }
    }
  }
  else {
    local_24 = 0;
    pbVar3 = local_38;
    if (*local_38 != 0) goto LAB_1002172a6;
    *local_30 = 4;
  }
LAB_10021726c:
  if ((param_1 == 0) || (pbVar3 = local_38, *local_30 == param_1)) {
    if (param_3 == (undefined8 *)0x0) {
      _xmlSchemaFreeValue(local_30);
    }
    else {
      *param_3 = local_30;
    }
    return 0;
  }
LAB_1002172a6:
  local_38 = pbVar3;
  if (local_30 != (int *)0x0) {
    _xmlSchemaFreeValue(local_30);
  }
  return 1;
}

