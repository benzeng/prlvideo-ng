
int FUN_100b72150(QString *param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  QString QVar2;
  char cVar3;
  int iVar4;
  QMapNodeBase *pQVar5;
  ulong *puVar6;
  QArrayData *pQVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  QArrayData *local_1b8;
  QString local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QString local_180;
  QString local_178;
  QArrayData *local_170;
  undefined1 local_168 [24];
  QMapNodeBase *local_150;
  undefined1 local_31;
  
  local_170 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b60470(local_168,&local_170);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b721ce;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100b721ce:
  local_178.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar4 = FUN_100b6fcb0(local_168,&local_178);
  if (-1 < iVar4) {
    cVar3 = operator==(param_1,&local_178);
    if (cVar3 == '\0') {
      iVar4 = -0x7ffeefcd;
      FUN_100df99c0("","License",0,"Error: wrong license serial");
    }
    else {
      if (*(int *)local_150 == 0) {
        pQVar5 = (QMapNodeBase *)QMapDataBase::createData();
        if (*(long *)(local_150 + 0x10) != 0) {
          puVar6 = (ulong *)FUN_1006f3350(*(long *)(local_150 + 0x10),pQVar5);
          *(ulong **)(pQVar5 + 0x10) = puVar6;
          *puVar6 = *puVar6 & 3 | (ulong)(pQVar5 + 8);
          QMapDataBase::recalcMostLeftNode();
        }
      }
      else {
        pQVar5 = local_150;
        if (*(int *)local_150 != -1) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + 1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
        }
      }
      local_180.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("status",6);
      if (*(long *)(pQVar5 + 0x10) == 0) {
LAB_100b72325:
        lVar10 = 0;
      }
      else {
        lVar1 = *(long *)(pQVar5 + 0x10);
        lVar8 = 0;
        do {
          while (lVar10 = lVar1, cVar3 = operator<((QString *)(lVar10 + 0x18),&local_180),
                cVar3 != '\0') {
            lVar1 = *(long *)(lVar10 + 0x10);
            if (*(long *)(lVar10 + 0x10) == 0) {
              lVar10 = lVar8;
              if (lVar8 == 0) goto LAB_100b72325;
              goto LAB_100b72311;
            }
          }
          lVar1 = *(long *)(lVar10 + 8);
          lVar8 = lVar10;
        } while (*(long *)(lVar10 + 8) != 0);
LAB_100b72311:
        cVar3 = operator<(&local_180,(QString *)(lVar10 + 0x18));
        if (cVar3 != '\0') goto LAB_100b72325;
      }
      if (*(int *)local_180.field0_0x0 != -1) {
        if (*(int *)local_180.field0_0x0 != 0) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
          local_31 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b72365;
        }
        QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
      }
LAB_100b72365:
      if (lVar10 == 0) {
        iVar4 = -0x7ffeefcd;
        FUN_100df99c0("","License",0,"Error: couldn\'t get license status");
      }
      else {
        if (param_3 == '\0') {
          QString::toLatin1();
          pQVar7 = local_198;
          lVar1 = *(long *)(local_198 + 0x10);
          QString::toLatin1();
          iVar4 = FUN_100b9be90(pQVar7 + lVar1,6,local_1a0 + *(long *)(local_1a0 + 0x10),2);
          if (*(int *)local_1a0 != -1) {
            if (*(int *)local_1a0 != 0) {
              LOCK();
              *(int *)local_1a0 = *(int *)local_1a0 + -1;
              local_31 = *(int *)local_1a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b724eb;
            }
            QArrayData::deallocate(local_1a0,1,8);
          }
LAB_100b724eb:
          if (*(int *)local_198 != -1) {
            if (*(int *)local_198 != 0) {
              LOCK();
              *(int *)local_198 = *(int *)local_198 + -1;
              local_31 = *(int *)local_198 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b72521;
            }
            QArrayData::deallocate(local_198,1,8);
          }
        }
        else {
          QString::toLatin1();
          pQVar7 = local_188;
          lVar1 = *(long *)(local_188 + 0x10);
          QString::toLatin1();
          iVar4 = FUN_100b9be90(pQVar7 + lVar1,7,local_190 + *(long *)(local_190 + 0x10),2);
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_31 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b723fe;
            }
            QArrayData::deallocate(local_190,1,8);
          }
LAB_100b723fe:
          if (*(int *)local_188 != -1) {
            if (*(int *)local_188 != 0) {
              LOCK();
              *(int *)local_188 = *(int *)local_188 + -1;
              local_31 = *(int *)local_188 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b72521;
            }
            QArrayData::deallocate(local_188,1,8);
          }
        }
LAB_100b72521:
        uVar9 = 0x12;
        if (iVar4 != 0) {
          local_1a8.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)
               QString::fromAscii_helper("Error: can\'t change license status to ",0x26);
          if (param_3 == '\0') {
            pQVar7 = (QArrayData *)QString::fromAscii_helper("active\n",7);
          }
          else {
            pQVar7 = (QArrayData *)QString::fromAscii_helper("graced\n",7);
          }
          QString::append(&local_1a8);
          if (*(int *)pQVar7 != -1) {
            if (*(int *)pQVar7 != 0) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b725c5;
            }
            QArrayData::deallocate(pQVar7,2,8);
          }
LAB_100b725c5:
          QVar2.field0_0x0 = local_1a8.field0_0x0;
          if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
            local_31 = *(int *)local_1a8.field0_0x0 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","License",0,"%s",local_1b8 + *(long *)(local_1b8 + 0x10));
          if (*(int *)local_1b8 != -1) {
            if (*(int *)local_1b8 != 0) {
              LOCK();
              *(int *)local_1b8 = *(int *)local_1b8 + -1;
              local_31 = *(int *)local_1b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b72656;
            }
            QArrayData::deallocate(local_1b8,1,8);
          }
LAB_100b72656:
          if (*(int *)QVar2.field0_0x0 != -1) {
            if (*(int *)QVar2.field0_0x0 != 0) {
              LOCK();
              *(int *)QVar2.field0_0x0 = *(int *)QVar2.field0_0x0 + -1;
              local_31 = *(int *)QVar2.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b7268c;
            }
            QArrayData::deallocate((QArrayData *)QVar2.field0_0x0,2,8);
          }
LAB_100b7268c:
          if (*(int *)local_1a8.field0_0x0 != -1) {
            if (*(int *)local_1a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
              local_31 = *(int *)local_1a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b726c2;
            }
            QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
          }
LAB_100b726c2:
          uVar9 = iVar4 + 0x12;
          iVar4 = -0x7ffef000;
          if (0x19 < uVar9) goto LAB_100b726e0;
        }
        iVar4 = *(int *)(&DAT_101cdc110 + (long)(int)uVar9 * 4);
      }
LAB_100b726e0:
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b72726;
        }
        if (*(long *)(pQVar5 + 0x10) != 0) {
          FUN_10012a490();
          QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar5);
      }
    }
  }
LAB_100b72726:
  if (*(int *)local_178.field0_0x0 != -1) {
    if (*(int *)local_178.field0_0x0 != 0) {
      LOCK();
      *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
      local_31 = *(int *)local_178.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b7275c;
    }
    QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
  }
LAB_100b7275c:
  FUN_100b663d0(local_168);
  return iVar4;
}

