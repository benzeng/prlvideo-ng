
int FUN_10067f630(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  QVariant *in_RCX;
  int *piVar8;
  undefined8 *puVar9;
  QArrayData *pQVar10;
  undefined4 *in_R8;
  bool bVar11;
  QArrayData *local_d0;
  undefined1 local_c8 [8];
  QArrayData *local_c0;
  QArrayData *local_b8;
  int *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QVariant local_88 [16];
  QVariant local_78 [16];
  QVariant local_68 [16];
  QVariant local_58 [16];
  QVariant local_48 [23];
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_100ba20d0;
  local_d0 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar1 = *in_R8;
  iVar4 = FUN_100680070();
  if (iVar4 != 0x8000000) goto LAB_10067fd6e;
  iVar4 = 0x8158018;
  switch(uVar1) {
  case 1:
  case 2:
  case 6:
  case 9:
    uVar5 = *(uint *)(local_d0 + 4);
    iVar4 = 0x8000006;
    if ((uVar5 & 1) == 0) {
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
      if (2 < uVar5 + 1) {
        bVar11 = *(short *)(local_d0 + *(long *)(local_d0 + 0x10) + (long)((int)uVar5 / 2 + -1) * 2)
                 == 0;
        iVar4 = (int)(local_d0 + *(long *)(local_d0 + 0x10));
        if (bVar11) {
          QString::fromUtf16((ushort *)&local_a8,iVar4);
          QString::normalized(&local_98,&local_a8,1,0);
        }
        else {
          QString::fromUtf16((ushort *)&local_a0,iVar4);
          QString::normalized(&local_98,&local_a0,1,0);
        }
        QString::operator=(&local_90,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067fb92;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_10067fb92:
        if ((bVar11) && (*(int *)local_a8 != -1)) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067fbcc;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_10067fbcc:
        if ((!bVar11) && (*(int *)local_a0 != -1)) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067fc07;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
LAB_10067fc07:
      uVar7 = *(uint *)(in_RCX + 8) & 0x3fffffff;
      uVar5 = *(uint *)(in_RCX + 8) & 0x40000000;
      if (uVar5 == 0) {
        if (uVar7 == 10) {
          *(undefined4 *)(in_RCX + 8) = 10;
          goto LAB_10067fc41;
        }
LAB_10067fc8c:
        QVariant::QVariant(local_78,10,&local_90,0);
        QVariant::operator=(in_RCX,local_78);
        QVariant::~QVariant(local_78);
      }
      else {
        if ((uVar7 != 10) || (*(int *)(*(undefined8 **)in_RCX + 1) != 1)) goto LAB_10067fc8c;
        *(uint *)(in_RCX + 8) = uVar5 | 10;
        in_RCX = (QVariant *)**(undefined8 **)in_RCX;
LAB_10067fc41:
        pQVar10 = *(QArrayData **)in_RCX;
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067fc6f;
            pQVar10 = *(QArrayData **)in_RCX;
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_10067fc6f:
        *(QTypedArrayData<unsigned_short> **)in_RCX = local_90.field0_0x0;
        if (1 < *(int *)local_90.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
        }
      }
      iVar4 = 0x8000000;
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
    }
    break;
  case 3:
    uVar7 = *(uint *)(in_RCX + 8) & 0x3fffffff;
    uVar5 = *(uint *)(in_RCX + 8) & 0x40000000;
    if (uVar5 == 0) {
      if (uVar7 != 0xc) {
LAB_10067faeb:
        QVariant::QVariant(local_88,0xc,&local_d0,0);
        QVariant::operator=(in_RCX,local_88);
        QVariant::~QVariant(local_88);
        goto LAB_10067fd3e;
      }
      *(undefined4 *)(in_RCX + 8) = 0xc;
    }
    else {
      if ((uVar7 != 0xc) || (*(int *)(*(undefined8 **)in_RCX + 1) != 1)) goto LAB_10067faeb;
      *(uint *)(in_RCX + 8) = uVar5 | 0xc;
      in_RCX = (QVariant *)**(undefined8 **)in_RCX;
    }
    pQVar10 = *(QArrayData **)in_RCX;
    if (*(int *)pQVar10 != -1) {
      if (*(int *)pQVar10 != 0) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_31 = *(int *)pQVar10 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067fa9d;
        pQVar10 = *(QArrayData **)in_RCX;
      }
      QArrayData::deallocate(pQVar10,1,8);
    }
LAB_10067fa9d:
    *(QArrayData **)in_RCX = local_d0;
    if (1 < *(int *)local_d0 + 1U) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + 1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
    }
LAB_10067fd3e:
    iVar4 = 0x8000000;
    break;
  case 4:
  case 5:
    iVar4 = 0x8000006;
    if (*(int *)(local_d0 + 4) == 4) {
      lVar6 = *(long *)(local_d0 + 0x10);
      uVar7 = *(uint *)(in_RCX + 8) & 0x3ffffff8;
      uVar5 = *(uint *)(in_RCX + 8) & 0x40000000;
      if (uVar5 == 0) {
        if (7 < uVar7) {
LAB_10067fac1:
          QVariant::QVariant(local_58,3,local_d0 + lVar6,0);
          QVariant::operator=(in_RCX,local_58);
          QVariant::~QVariant(local_58);
          goto LAB_10067fd3e;
        }
        *(undefined4 *)(in_RCX + 8) = 3;
      }
      else {
        if ((7 < uVar7) || (*(int *)(*(undefined8 **)in_RCX + 1) != 1)) goto LAB_10067fac1;
        *(uint *)(in_RCX + 8) = uVar5 | 3;
        in_RCX = (QVariant *)**(undefined8 **)in_RCX;
      }
      *(undefined4 *)in_RCX = *(undefined4 *)(local_d0 + lVar6);
      goto LAB_10067fd3e;
    }
    break;
  case 7:
  case 8:
  case 10:
    iVar4 = 0x8000006;
    if ((*(uint *)(local_d0 + 4) & 1) == 0) {
      local_b0 = (int *)PTR_shared_null_100ba2188;
      if (2 < *(uint *)(local_d0 + 4) + 1) {
        QString::fromUtf16((ushort *)&local_c0,(int)(local_d0 + *(long *)(local_d0 + 0x10)));
        QString::normalized(&local_b8,&local_c0,1,0);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067f7e5;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_10067f7e5:
        QString::split(local_c8,&local_b8,0,0,1);
        FUN_10051afa0(&local_b0,local_c8);
        FUN_100013180(local_c8);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067f857;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
LAB_10067f857:
      uVar7 = *(uint *)(in_RCX + 8) & 0x3fffffff;
      uVar5 = *(uint *)(in_RCX + 8) & 0x40000000;
      if (uVar5 == 0) {
        if (uVar7 == 0xb) {
          *(undefined4 *)(in_RCX + 8) = 0xb;
          goto LAB_10067f95f;
        }
LAB_10067f9ec:
        QVariant::QVariant(local_68,0xb,&local_b0,0);
        QVariant::operator=(in_RCX,local_68);
        QVariant::~QVariant(local_68);
      }
      else {
        if ((uVar7 != 0xb) || (*(int *)(*(undefined8 **)in_RCX + 1) != 1)) goto LAB_10067f9ec;
        *(uint *)(in_RCX + 8) = uVar5 | 0xb;
        in_RCX = (QVariant *)**(undefined8 **)in_RCX;
LAB_10067f95f:
        FUN_100013180(in_RCX);
        *(int **)in_RCX = local_b0;
        if (*local_b0 != -1) {
          if (*local_b0 == 0) {
            QListData::detach((int)in_RCX);
            lVar6 = *(long *)in_RCX;
            iVar4 = *(int *)(lVar6 + 8);
            if (iVar4 != *(int *)(lVar6 + 0xc)) {
              piVar8 = local_b0 + (long)local_b0[2] * 2 + 4;
              puVar9 = (undefined8 *)(lVar6 + 0x10 + (long)iVar4 * 8);
              lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar4 * -8;
              do {
                piVar2 = *(int **)piVar8;
                *puVar9 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_31 = *piVar2 != 0;
                  UNLOCK();
                }
                puVar9 = puVar9 + 1;
                piVar8 = piVar8 + 2;
                lVar6 = lVar6 + -8;
              } while (lVar6 != 0);
            }
          }
          else {
            LOCK();
            *local_b0 = *local_b0 + 1;
            local_31 = *local_b0 != 0;
            UNLOCK();
          }
        }
      }
      iVar4 = 0x8000000;
      FUN_100013180(&local_b0);
    }
    break;
  case 0xb:
    iVar4 = 0x8000006;
    if (*(int *)(local_d0 + 4) == 8) {
      lVar6 = *(long *)(local_d0 + 0x10);
      uVar7 = *(uint *)(in_RCX + 8) & 0x3ffffff8;
      uVar5 = *(uint *)(in_RCX + 8) & 0x40000000;
      if (uVar5 == 0) {
        if (7 < uVar7) {
LAB_10067fd19:
          QVariant::QVariant(local_48,5,local_d0 + lVar6,0);
          QVariant::operator=(in_RCX,local_48);
          QVariant::~QVariant(local_48);
          goto LAB_10067fd3e;
        }
        *(undefined4 *)(in_RCX + 8) = 5;
      }
      else {
        if ((7 < uVar7) || (*(int *)(*(undefined8 **)in_RCX + 1) != 1)) goto LAB_10067fd19;
        *(uint *)(in_RCX + 8) = uVar5 | 5;
        in_RCX = (QVariant *)**(undefined8 **)in_RCX;
      }
      *(undefined8 *)in_RCX = *(undefined8 *)(local_d0 + lVar6);
      goto LAB_10067fd3e;
    }
  }
  if (iVar4 == 0x8000000) {
    *in_R8 = uVar1;
    iVar4 = 0x8000000;
  }
LAB_10067fd6e:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      UNLOCK();
      if (*(int *)local_d0 != 0) {
        return iVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
  return iVar4;
}

