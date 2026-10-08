
void FUN_1000cb9e0(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint unaff_R12D;
  uint uVar9;
  long lVar10;
  bool bVar11;
  uint local_cc;
  undefined8 local_c8;
  uint local_c0;
  QVariant local_48;
  QString local_38;
  
  if ((*(int *)(param_2 + 0x30) == 0) && (*(int *)(param_2 + 0x34) == 0)) {
    return;
  }
  puVar4 = *(uint **)(param_2 + 0x38);
  uVar6 = puVar4[3];
  uVar7 = puVar4[2];
  if (uVar6 == uVar7 || (int)uVar6 < (int)puVar4[2]) {
    uVar9 = 0;
    local_cc = (uint)puVar4;
  }
  else {
    lVar10 = 0;
    uVar9 = 0;
    local_cc = param_4;
    do {
      if (1 < *puVar4) {
        FUN_1000e7430((undefined8 *)(param_2 + 0x38),puVar4[1]);
        puVar4 = *(uint **)(param_2 + 0x38);
      }
      lVar8 = *(long *)(puVar4 + ((int)puVar4[2] + lVar10) * 2 + 4);
      if (((uVar9 & 0xff) < (uint)*(byte *)(lVar8 + 0x1a)) ||
         (((*(byte *)(lVar8 + 0x1a) == 2 && ((uVar9 & 0xff) == 2)) &&
          ((uint)*(ushort *)(lVar8 + 0x18) < (local_cc & 0xffff))))) {
        local_cc = *(uint *)(lVar8 + 0x18);
        uVar9 = local_cc >> 0x10;
        unaff_R12D = local_cc >> 0x18;
      }
      lVar10 = lVar10 + 1;
    } while (uVar6 - uVar7 != (int)lVar10);
  }
  cVar3 = *(char *)(param_2 + 0x4e);
  if (cVar3 == '\0' && (char)uVar9 == '\0') {
    return;
  }
  uVar6 = uVar9 & 0xff;
  uVar7 = local_cc & 0xffff | uVar6 << 0x10 | unaff_R12D << 0x18;
  if (*(uint *)(param_2 + 0x4c) == uVar7) {
    return;
  }
  if (((char)uVar9 == '\0') && (*(char *)(param_2 + 0x4a) == '\0')) {
    bVar11 = false;
    uVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x48);
    if ((uVar7 != uVar1) && ((uVar6 - 3 < 2 && (*(byte *)(param_2 + 0x4a) == uVar6)))) {
      uVar9 = uVar1 >> 0x10;
      unaff_R12D = uVar1 >> 0x18;
      local_cc = uVar1;
    }
    bVar11 = (uVar9 & 0xff) == 4;
    if ((bVar11) && (cVar3 != '\x04')) {
      uVar5 = FUN_1001d50a0();
      cVar3 = FUN_1001d50e0(uVar5);
      if (cVar3 != '\0') {
        uVar5 = FUN_100060bb0();
        FUN_1000609c0(uVar5);
        QObject::property((char *)&local_48);
        QVariant::toString();
        cVar3 = operator==((QString *)(param_1 + 0x10),&local_38);
        bVar11 = true;
        if (cVar3 != '\0') {
          cVar3 = FUN_1000bd150(param_1);
          if (cVar3 == '\0') {
LAB_1000cbc2d:
            bVar11 = false;
          }
          else {
            lVar10 = *(long *)(param_2 + 0x38);
            iVar2 = *(int *)(lVar10 + 8);
            if (iVar2 < *(int *)(lVar10 + 0xc)) {
              lVar8 = 0;
              do {
                if (**(ulong **)(lVar10 + 0x10 + (long)iVar2 * 8 + lVar8 * 8) ==
                    (ulong)*(uint *)(param_1 + 0x80)) goto LAB_1000cbc2d;
                lVar8 = lVar8 + 1;
              } while (lVar8 < *(int *)(lVar10 + 0xc) - iVar2);
            }
          }
        }
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            UNLOCK();
            local_c8 = CONCAT71(local_c8._1_7_,*(int *)local_38.field0_0x0 != 0);
            if (*(int *)local_38.field0_0x0 != 0) goto LAB_1000cbc66;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
LAB_1000cbc66:
        QVariant::~QVariant(&local_48);
        local_c8 = 1;
        if (!bVar11) goto LAB_1000cbc83;
      }
      *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 4;
      local_c8 = 3;
      goto LAB_1000cbc83;
    }
  }
  local_c8 = 1;
  if ((!bVar11) && (cVar3 == '\x04')) {
    *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) & 0xfb;
    local_c8 = 5;
  }
LAB_1000cbc83:
  uVar6 = local_cc & 0xffff | (uVar9 & 0xff) << 0x10 | unaff_R12D << 0x18;
  local_c0 = uVar6;
  FUN_1000c4970(param_2 + 0x30,0x77,&local_c8,0x80);
  *(uint *)(param_2 + 0x4c) = uVar6;
  return;
}

