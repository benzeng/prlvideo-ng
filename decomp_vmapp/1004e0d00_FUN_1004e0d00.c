
int FUN_1004e0d00(long param_1,undefined4 *param_2,long param_3,uint *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  undefined1 *puVar12;
  long *plVar13;
  uint local_8c;
  QString local_88;
  QString local_80;
  QDir local_78 [8];
  long local_70;
  undefined1 local_68 [24];
  QArrayData *local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  local_8c = *param_4;
  uVar1 = *(undefined8 *)(param_2 + 2);
  FUN_1004e1330(&local_40,param_1,*param_2);
  plVar13 = local_40;
  if (local_40 == (long *)0x0) {
    return -0xfffffee;
  }
  iVar7 = -0xfffffde;
  if ((*(byte *)(local_40 + 7) & 0x40) != 0) goto LAB_1004e1203;
  cVar5 = QFileInfo::isDir();
  iVar7 = -0xfffffeb;
  if (cVar5 == '\0') goto LAB_1004e1203;
  plVar2 = (long *)plVar13[9];
  if (*(int *)(*plVar2 + 0xc) == *(int *)(*plVar2 + 8)) {
    if (*(int *)(plVar13[6] + 4) == 0) {
      plVar10 = (long *)0x0;
      if (*(long *)(param_1 + 0x80) != 0) {
        plVar10 = *(long **)(*(long *)(param_1 + 0x80) + 0x10);
      }
      pcVar3 = *(code **)(*plVar10 + 0x28);
      local_50 = (QArrayData *)QString::fromAscii_helper("*",1);
      (*pcVar3)(&local_48,plVar10,param_1 + 0x18,&local_50,0);
      plVar10 = local_48;
      local_48 = (long *)0x0;
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e0e7c;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1004e0e7c:
      local_68._8_4_ = (int)PTR_shared_null_100ba20d0;
      local_68._0_8_ = PTR_shared_null_100ba20d0;
      local_68._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      while (cVar5 = (**(code **)(*plVar10 + 0x18))(plVar10,local_68), cVar5 != '\0') {
        FUN_10000c490(plVar2,local_68 + 8);
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      if (*(int *)local_68._8_8_ != -1) {
        if (*(int *)local_68._8_8_ != 0) {
          LOCK();
          *(int *)local_68._8_8_ = *(int *)local_68._8_8_ + -1;
          local_31 = *(int *)local_68._8_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e0f76;
        }
        QArrayData::deallocate((QArrayData *)local_68._8_8_,2,8);
      }
LAB_1004e0f76:
      if (*(int *)local_68._0_8_ != -1) {
        if (*(int *)local_68._0_8_ != 0) {
          LOCK();
          *(int *)local_68._0_8_ = *(int *)local_68._0_8_ + -1;
          local_31 = *(int *)local_68._0_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004e0fa6;
        }
        QArrayData::deallocate((QArrayData *)local_68._0_8_,2,8);
      }
LAB_1004e0fa6:
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    else {
      QDir::QDir(local_78,(QString *)(plVar13 + 5));
      QDir::entryList(&local_70,local_78,0x707,0xffffffff);
      lVar6 = *plVar2;
      *plVar2 = local_70;
      local_70 = lVar6;
      FUN_100013180(&local_70);
      QDir::~QDir(local_78);
    }
  }
  lVar6 = FUN_1004d93b0(param_1);
  iVar7 = -0xfffffe4;
  if (lVar6 != 0) {
    iVar9 = (int)uVar1;
    uVar11 = 0;
    if (iVar9 < *(int *)(*plVar2 + 0xc) - *(int *)(*plVar2 + 8)) {
      lVar6 = (long)iVar9;
      uVar11 = 0;
      iVar7 = 0;
      do {
        QTextCodec::fromUnicode(&local_80);
        iVar9 = *(int *)(local_80.field0_0x0 + 4);
        if (iVar9 == 0) {
          iVar7 = -0xfffffee;
          bVar4 = false;
        }
        else {
          uVar8 = iVar9 + 10U & 0xfffffff8;
          if (local_8c < uVar8) {
            if (uVar11 == 0) {
              iVar7 = -0xffffff7;
            }
            bVar4 = false;
          }
          else {
            puVar12 = (undefined1 *)((ulong)uVar11 + param_3);
            puVar12[1] = 0;
            *puVar12 = (char)iVar9;
            QTextCodec::fromUnicode(&local_88);
            if ((1 < *(uint *)local_88.field0_0x0) ||
               (*(long *)(local_88.field0_0x0 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_88,*(uint *)(local_88.field0_0x0 + 4) + 1,
                         *(uint *)(local_88.field0_0x0 + 8) >> 0x1f);
            }
            _memcpy(puVar12 + 2,
                    (QArrayData *)(local_88.field0_0x0 + *(long *)(local_88.field0_0x0 + 0x10)),
                    (ulong)(iVar9 + 1));
            if (*(int *)local_88.field0_0x0 != -1) {
              if (*(int *)local_88.field0_0x0 != 0) {
                LOCK();
                *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                local_31 = *(int *)local_88.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004e114a;
              }
              QArrayData::deallocate((QArrayData *)local_88.field0_0x0,1,8);
            }
LAB_1004e114a:
            uVar11 = uVar11 + uVar8;
            bVar4 = true;
            local_8c = local_8c - uVar8;
          }
        }
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004e1198;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,1,8);
        }
LAB_1004e1198:
      } while ((bVar4) &&
              (lVar6 = lVar6 + 1,
              lVar6 < (long)*(int *)(*plVar2 + 0xc) - (long)*(int *)(*plVar2 + 8)));
      iVar9 = (int)lVar6;
      if (iVar7 == 0) goto LAB_1004e11db;
    }
    else {
LAB_1004e11db:
      iVar7 = 0;
      if (*(int *)(*plVar2 + 0xc) - *(int *)(*plVar2 + 8) <= iVar9) {
        param_2[4] = 0xffff;
      }
    }
    *param_4 = uVar11;
    plVar13 = local_40;
  }
  if (plVar13 == (long *)0x0) {
    return iVar7;
  }
LAB_1004e1203:
  LOCK();
  plVar2 = plVar13 + 1;
  lVar6 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar6 == 1) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  return iVar7;
}

