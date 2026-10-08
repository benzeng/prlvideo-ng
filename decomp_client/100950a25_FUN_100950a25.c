
int FUN_100950a25(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  int local_8c;
  int local_24;
  int local_18;
  int local_14;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return -2;
  }
  if ((*(ulong *)(param_1 + 10) & 1) == 0) {
    if ((*(ulong *)(param_2 + 10) & 1) != 0) {
      lVar9 = FUN_10095052d(0,param_2);
      lVar10 = FUN_100950603(lVar9);
      lVar10 = lVar10 + (ulong)((uint)(*(ulong *)(lVar9 + 0x18) >> 4) & 0x1f);
      lVar11 = FUN_10095052d(DAT_101c9bdf8,param_1);
      lVar12 = FUN_100950603(lVar11);
      lVar12 = lVar12 + (ulong)((uint)(*(ulong *)(lVar11 + 0x18) >> 4) & 0x1f);
      if (lVar12 < lVar10) {
        _xmlSchemaFreeValue(lVar11);
        _xmlSchemaFreeValue(lVar9);
        return -1;
      }
      if (lVar12 == lVar10) {
        if (((double)(int)(((uint)(*(ulong *)(lVar11 + 0x18) >> 9) & 0x1f) * 0xe10 +
                           ((uint)(*(ulong *)(lVar11 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                          (short)((short)((int)*(undefined8 *)(lVar11 + 0x28) << 3) >> 4) * 0x3c) +
            *(double *)(lVar11 + 0x20)) -
            (*(double *)(lVar9 + 0x20) +
            (double)(int)(((uint)(*(ulong *)(lVar9 + 0x18) >> 9) & 0x1f) * 0xe10 +
                          ((uint)(*(ulong *)(lVar9 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                         (short)((short)((int)*(undefined8 *)(lVar9 + 0x28) << 3) >> 4) * 0x3c)) <
            0.0) {
          _xmlSchemaFreeValue(lVar11);
          _xmlSchemaFreeValue(lVar9);
          return -1;
        }
        local_18 = 0;
        lVar13 = FUN_10095052d(DAT_101c9bdf0,param_1);
        lVar12 = FUN_100950603(lVar13);
        lVar12 = lVar12 + (ulong)((uint)(*(ulong *)(lVar13 + 0x18) >> 4) & 0x1f);
        if (lVar10 < lVar12) {
          local_18 = 1;
        }
        else if (lVar12 == lVar10) {
          if (0.0 < ((double)(int)(((uint)(*(ulong *)(lVar13 + 0x18) >> 9) & 0x1f) * 0xe10 +
                                   ((uint)(*(ulong *)(lVar13 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                                  (short)((short)((int)*(undefined8 *)(lVar13 + 0x28) << 3) >> 4) *
                                  0x3c) + *(double *)(lVar13 + 0x20)) -
                    (*(double *)(lVar9 + 0x20) +
                    (double)(int)(((uint)(*(ulong *)(lVar9 + 0x18) >> 9) & 0x1f) * 0xe10 +
                                  ((uint)(*(ulong *)(lVar9 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                                 (short)((short)((int)*(undefined8 *)(lVar9 + 0x28) << 3) >> 4) *
                                 0x3c))) {
            local_18 = 1;
          }
          else {
            local_18 = 2;
          }
        }
        _xmlSchemaFreeValue(lVar11);
        _xmlSchemaFreeValue(lVar9);
        _xmlSchemaFreeValue(lVar13);
        if (local_18 != 0) {
          return local_18;
        }
      }
      else {
        _xmlSchemaFreeValue(lVar11);
        _xmlSchemaFreeValue(lVar9);
      }
    }
  }
  else if ((*(ulong *)(param_2 + 10) & 1) == 0) {
    lVar9 = FUN_10095052d(0,param_1);
    lVar10 = FUN_100950603(lVar9);
    lVar10 = lVar10 + (ulong)((uint)(*(ulong *)(lVar9 + 0x18) >> 4) & 0x1f);
    lVar11 = FUN_10095052d(DAT_101c9bdf0,param_2);
    lVar12 = FUN_100950603(lVar11);
    lVar12 = lVar12 + (ulong)((uint)(*(ulong *)(lVar11 + 0x18) >> 4) & 0x1f);
    if (lVar10 < lVar12) {
      _xmlSchemaFreeValue(lVar9);
      _xmlSchemaFreeValue(lVar11);
      return -1;
    }
    if (lVar10 == lVar12) {
      if (((double)(int)(((uint)(*(ulong *)(lVar9 + 0x18) >> 9) & 0x1f) * 0xe10 +
                         ((uint)(*(ulong *)(lVar9 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                        (short)((short)((int)*(undefined8 *)(lVar9 + 0x28) << 3) >> 4) * 0x3c) +
          *(double *)(lVar9 + 0x20)) -
          (*(double *)(lVar11 + 0x20) +
          (double)(int)(((uint)(*(ulong *)(lVar11 + 0x18) >> 9) & 0x1f) * 0xe10 +
                        ((uint)(*(ulong *)(lVar11 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                       (short)((short)((int)*(undefined8 *)(lVar11 + 0x28) << 3) >> 4) * 0x3c)) <
          0.0) {
        _xmlSchemaFreeValue(lVar9);
        _xmlSchemaFreeValue(lVar11);
        return -1;
      }
      local_24 = 0;
      lVar13 = FUN_10095052d(DAT_101c9bdf8,param_2);
      lVar12 = FUN_100950603(lVar13);
      lVar12 = lVar12 + (ulong)((uint)(*(ulong *)(lVar13 + 0x18) >> 4) & 0x1f);
      if (lVar12 < lVar10) {
        local_24 = 1;
      }
      else if (lVar10 == lVar12) {
        if (0.0 < ((double)(int)(((uint)(*(ulong *)(lVar9 + 0x18) >> 9) & 0x1f) * 0xe10 +
                                 ((uint)(*(ulong *)(lVar9 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                                (short)((short)((int)*(undefined8 *)(lVar9 + 0x28) << 3) >> 4) *
                                0x3c) + *(double *)(lVar9 + 0x20)) -
                  (*(double *)(lVar13 + 0x20) +
                  (double)(int)(((uint)(*(ulong *)(lVar13 + 0x18) >> 9) & 0x1f) * 0xe10 +
                                ((uint)(*(ulong *)(lVar13 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                               (short)((short)((int)*(undefined8 *)(lVar13 + 0x28) << 3) >> 4) *
                               0x3c))) {
          local_24 = 1;
        }
        else {
          local_24 = 2;
        }
      }
      _xmlSchemaFreeValue(lVar9);
      _xmlSchemaFreeValue(lVar11);
      _xmlSchemaFreeValue(lVar13);
      if (local_24 != 0) {
        return local_24;
      }
    }
    else {
      _xmlSchemaFreeValue(lVar9);
      _xmlSchemaFreeValue(lVar11);
    }
  }
  if (*param_1 == *param_2) {
    local_14 = 0;
    lVar9 = FUN_10095052d(0,param_2);
    lVar10 = FUN_100950603(lVar9);
    lVar10 = lVar10 + (ulong)((uint)(*(ulong *)(lVar9 + 0x18) >> 4) & 0x1f);
    lVar11 = FUN_10095052d(0,param_1);
    lVar12 = FUN_100950603(lVar11);
    lVar12 = lVar12 + (ulong)((uint)(*(ulong *)(lVar11 + 0x18) >> 4) & 0x1f);
    if (lVar12 < lVar10) {
      local_14 = -1;
    }
    else if (lVar10 < lVar12) {
      local_14 = 1;
    }
    else {
      dVar14 = ((double)(int)(((uint)(*(ulong *)(lVar11 + 0x18) >> 9) & 0x1f) * 0xe10 +
                              ((uint)(*(ulong *)(lVar11 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                             (short)((short)((int)*(undefined8 *)(lVar11 + 0x28) << 3) >> 4) * 0x3c)
               + *(double *)(lVar11 + 0x20)) -
               (*(double *)(lVar9 + 0x20) +
               (double)(int)(((uint)(*(ulong *)(lVar9 + 0x18) >> 9) & 0x1f) * 0xe10 +
                             ((uint)(*(ulong *)(lVar9 + 0x18) >> 0xe) & 0x3f) * 0x3c +
                            (short)((short)((int)*(undefined8 *)(lVar9 + 0x28) << 3) >> 4) * 0x3c));
      if (dVar14 < 0.0) {
        local_14 = -1;
      }
      else if (0.0 < dVar14) {
        local_14 = 1;
      }
    }
    _xmlSchemaFreeValue(lVar11);
    _xmlSchemaFreeValue(lVar9);
    local_8c = local_14;
  }
  else {
    switch(*param_1) {
    case 4:
      bVar5 = 1;
      bVar3 = 0;
      bVar1 = 0;
      bVar7 = 0;
      break;
    case 5:
      bVar5 = 0;
      bVar3 = 0;
      bVar1 = 1;
      bVar7 = 1;
      break;
    case 6:
      bVar5 = 0;
      bVar3 = 0;
      bVar1 = 1;
      bVar7 = 0;
      break;
    case 7:
      bVar5 = 0;
      bVar3 = 1;
      bVar1 = 1;
      bVar7 = 0;
      break;
    case 8:
      bVar5 = 0;
      bVar3 = 0;
      bVar1 = 0;
      bVar7 = 1;
      break;
    case 9:
      bVar5 = 0;
      bVar3 = 0;
      bVar1 = 1;
      bVar7 = 1;
      break;
    case 10:
      bVar5 = 0;
      bVar3 = 1;
      bVar1 = 1;
      bVar7 = 1;
      break;
    case 0xb:
      bVar5 = 1;
      bVar3 = 1;
      bVar1 = 1;
      bVar7 = 1;
      break;
    default:
      bVar5 = 0;
      bVar3 = 0;
      bVar1 = 0;
      bVar7 = 0;
    }
    switch(*param_2) {
    case 4:
      bVar6 = 1;
      bVar4 = 0;
      bVar2 = 0;
      bVar8 = 0;
      break;
    case 5:
      bVar6 = 0;
      bVar4 = 0;
      bVar2 = 1;
      bVar8 = 1;
      break;
    case 6:
      bVar6 = 0;
      bVar4 = 0;
      bVar2 = 1;
      bVar8 = 0;
      break;
    case 7:
      bVar6 = 0;
      bVar4 = 1;
      bVar2 = 1;
      bVar8 = 0;
      break;
    case 8:
      bVar6 = 0;
      bVar4 = 0;
      bVar2 = 0;
      bVar8 = 1;
      break;
    case 9:
      bVar6 = 0;
      bVar4 = 0;
      bVar2 = 1;
      bVar8 = 1;
      break;
    case 10:
      bVar6 = 0;
      bVar4 = 1;
      bVar2 = 1;
      bVar8 = 1;
      break;
    case 0xb:
      bVar6 = 1;
      bVar4 = 1;
      bVar2 = 1;
      bVar8 = 1;
      break;
    default:
      bVar6 = 0;
      bVar4 = 0;
      bVar2 = 0;
      bVar8 = 0;
    }
    if ((bool)(bVar8 ^ bVar7)) {
      local_8c = 2;
    }
    else {
      if ((bool)(bVar8 & bVar7)) {
        if (*(long *)(param_1 + 4) < *(long *)(param_2 + 4)) {
          return -1;
        }
        if (*(long *)(param_2 + 4) < *(long *)(param_1 + 4)) {
          return 1;
        }
      }
      if (bVar2 == bVar1) {
        if ((bVar2 & bVar1) != 0) {
          if (((uint)*(undefined8 *)(param_1 + 6) & 0xf) <
              ((uint)*(undefined8 *)(param_2 + 6) & 0xf)) {
            return -1;
          }
          if (((uint)*(undefined8 *)(param_2 + 6) & 0xf) <
              ((uint)*(undefined8 *)(param_1 + 6) & 0xf)) {
            return 1;
          }
        }
        if (bVar4 == bVar3) {
          if ((bVar4 & bVar3) != 0) {
            if (((uint)(*(ulong *)(param_1 + 6) >> 4) & 0x1f) <
                ((uint)(*(ulong *)(param_2 + 6) >> 4) & 0x1f)) {
              return -1;
            }
            if (((uint)(*(ulong *)(param_2 + 6) >> 4) & 0x1f) <
                ((uint)(*(ulong *)(param_1 + 6) >> 4) & 0x1f)) {
              return 1;
            }
          }
          if (bVar6 == bVar5) {
            if ((bVar6 & bVar5) != 0) {
              if (((uint)(*(ulong *)(param_1 + 6) >> 9) & 0x1f) <
                  ((uint)(*(ulong *)(param_2 + 6) >> 9) & 0x1f)) {
                return -1;
              }
              if (((uint)(*(ulong *)(param_2 + 6) >> 9) & 0x1f) <
                  ((uint)(*(ulong *)(param_1 + 6) >> 9) & 0x1f)) {
                return 1;
              }
              if (((uint)(*(ulong *)(param_1 + 6) >> 0xe) & 0x3f) <
                  ((uint)(*(ulong *)(param_2 + 6) >> 0xe) & 0x3f)) {
                return -1;
              }
              if (((uint)(*(ulong *)(param_2 + 6) >> 0xe) & 0x3f) <
                  ((uint)(*(ulong *)(param_1 + 6) >> 0xe) & 0x3f)) {
                return 1;
              }
              if (*(double *)(param_1 + 8) < *(double *)(param_2 + 8)) {
                return -1;
              }
              if (*(double *)(param_2 + 8) < *(double *)(param_1 + 8)) {
                return 1;
              }
            }
            local_8c = 0;
          }
          else {
            local_8c = 2;
          }
        }
        else {
          local_8c = 2;
        }
      }
      else {
        local_8c = 2;
      }
    }
  }
  return local_8c;
}

