
undefined8 FUN_100b91c30(long param_1,long *param_2,undefined8 param_3)

{
  long ******pppppplVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  QArrayData *pQVar9;
  long *******ppppppplVar10;
  long lVar11;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int local_54;
  QString local_50;
  long ******local_48;
  long ******local_40;
  undefined1 uStack_31;
  
  local_48 = (long ******)&local_48;
  local_40 = (long ******)&local_48;
  FUN_100b93850(1);
  uVar6 = FUN_100b9a400(param_1,&local_48);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if ((long *******)local_48 != &local_48) {
    ppppppplVar10 = (long *******)local_48;
    do {
      pppppplVar1 = ppppppplVar10[2];
      if (((pppppplVar1 != (long ******)0x0) &&
          (iVar4 = _strcmp("CLASS",(char *)pppppplVar1), iVar4 != 0)) &&
         (iVar4 = _strcmp("VE_CLASS",(char *)pppppplVar1), iVar4 != 0)) {
        iVar4 = _strcmp("platform",(char *)pppppplVar1);
        if (iVar4 == 0) {
          local_50.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("platform",8);
          lVar2 = *(long *)(*param_2 + 0x10);
          lVar11 = 0;
          if (*(long *)(*param_2 + 0x10) == 0) {
LAB_100b91d76:
            lVar8 = 0;
          }
          else {
            do {
              while (lVar8 = lVar2, cVar3 = operator<((QString *)(lVar8 + 0x18),&local_50),
                    cVar3 == '\0') {
                lVar2 = *(long *)(lVar8 + 8);
                lVar11 = lVar8;
                if (*(long *)(lVar8 + 8) == 0) goto LAB_100b91d66;
              }
              lVar2 = *(long *)(lVar8 + 0x10);
            } while (*(long *)(lVar8 + 0x10) != 0);
            lVar8 = lVar11;
            if (lVar11 == 0) goto LAB_100b91d76;
LAB_100b91d66:
            cVar3 = operator<(&local_50,(QString *)(lVar8 + 0x18));
            if (cVar3 != '\0') goto LAB_100b91d76;
          }
          if (*(int *)local_50.field0_0x0 != -1) {
            if (*(int *)local_50.field0_0x0 != 0) {
              LOCK();
              *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
              uStack_31 = *(int *)local_50.field0_0x0 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_100b91da8;
            }
            QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
          }
LAB_100b91da8:
          if (lVar8 != 0) {
            pppppplVar1 = ppppppplVar10[3];
            sVar7 = _strlen((char *)pppppplVar1);
            FUN_100b9f360(&local_54,pppppplVar1,sVar7 & 0xffffffff);
            iVar4 = local_54;
            iVar5 = FUN_100b93840();
            if (iVar4 != iVar5) goto LAB_100b91f80;
          }
        }
        pppppplVar1 = ppppppplVar10[2];
        iVar5 = -1;
        iVar4 = -1;
        if (pppppplVar1 != (long ******)0x0) {
          sVar7 = _strlen((char *)pppppplVar1);
          iVar4 = (int)sVar7;
        }
        local_60 = (QArrayData *)QString::fromAscii_helper((char *)pppppplVar1,iVar4);
        pppppplVar1 = ppppppplVar10[3];
        if (pppppplVar1 != (long ******)0x0) {
          sVar7 = _strlen((char *)pppppplVar1);
          iVar5 = (int)sVar7;
        }
        local_68 = (QArrayData *)QString::fromAscii_helper((char *)pppppplVar1,iVar5);
        FUN_1006f3070(param_2,&local_60,&local_68);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            uStack_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)uStack_31) goto LAB_100b91e74;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100b91e74:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            uStack_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)uStack_31) goto LAB_100b91ea4;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100b91ea4:
        if ((ppppppplVar10[4] != (long ******)0x0) && (*(char *)ppppppplVar10[4] != '\0')) {
          pppppplVar1 = ppppppplVar10[2];
          iVar5 = -1;
          iVar4 = -1;
          if (pppppplVar1 != (long ******)0x0) {
            sVar7 = _strlen((char *)pppppplVar1);
            iVar4 = (int)sVar7;
          }
          local_70 = (QArrayData *)QString::fromAscii_helper((char *)pppppplVar1,iVar4);
          pppppplVar1 = ppppppplVar10[4];
          if (pppppplVar1 != (long ******)0x0) {
            sVar7 = _strlen((char *)pppppplVar1);
            iVar5 = (int)sVar7;
          }
          local_78 = (QArrayData *)QString::fromAscii_helper((char *)pppppplVar1,iVar5);
          FUN_1006f3070(param_3,&local_70,&local_78);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              uStack_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_100b91f4f;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_100b91f4f:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              uStack_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_100b91f80;
            }
            QArrayData::deallocate(local_70,2,8);
          }
        }
      }
LAB_100b91f80:
      ppppppplVar10 = (long *******)*ppppppplVar10;
    } while (ppppppplVar10 != &local_48);
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("prl_version",0xb);
  local_a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_98,&local_a0,*(undefined4 *)(param_1 + 0xcc),0,10,0x20);
  QString::toLocal8Bit();
  pQVar9 = local_90 + *(long *)(local_90 + 0x10);
  iVar4 = -1;
  if (pQVar9 != (QArrayData *)0x0) {
    sVar7 = _strlen((char *)pQVar9);
    iVar4 = (int)sVar7;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper((char *)pQVar9,iVar4);
  FUN_1006f3070(param_2,&local_80,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      uStack_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_100b92068;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b92068:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      uStack_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_100b9209e;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100b9209e:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      uStack_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_100b920d4;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100b920d4:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      uStack_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_100b9210a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b9210a:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      uStack_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_100b9213a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100b9213a:
  FUN_100b9ab50(&local_48);
  return 0;
}

