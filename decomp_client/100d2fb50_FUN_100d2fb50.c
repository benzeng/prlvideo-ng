
undefined8 * FUN_100d2fb50(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  QArrayData *pQVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  uint *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("VBOX DISK IMAGE DESCRIPTOR 1\n",0x1d);
  cVar1 = QString::startsWith(param_1,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2fbbc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d2fbbc:
  if (cVar1 == '\0') {
    return (undefined8 *)0x0;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QString::split(&local_48,param_1,&local_50,0,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2fc24;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d2fc24:
  puVar5 = local_48;
  puVar3 = (undefined8 *)0x0;
  if (1 < (int)(local_48[3] - local_48[2])) {
    puVar3 = operator_new(0x10);
    *puVar3 = &PTR_FUN_10225b7d0;
    puVar3[1] = PTR_shared_null_1021e15e8;
    if (1 < (int)(puVar5[3] - puVar5[2])) {
      lVar7 = 1;
      do {
        if (1 < *puVar5) {
          FUN_100036c40(&local_48,puVar5[1]);
          puVar5 = local_48;
        }
        uVar6 = puVar5[2];
        if (*(int *)(*(long *)(puVar5 + (lVar7 + (int)uVar6) * 2 + 4) + 4) != 0) {
          if (1 < *puVar5) {
            FUN_100036c40(&local_48,puVar5[1]);
            uVar6 = local_48[2];
            puVar5 = local_48;
          }
          local_58 = (QArrayData *)QString::fromAscii_helper(":",1);
          iVar2 = QString::indexOf(puVar5 + ((int)uVar6 + lVar7) * 2 + 4,&local_58,0,1);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d2fd28;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_100d2fd28:
          if (iVar2 == -1) {
            pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
            local_60 = pQVar4;
            if (1 < *local_48) {
              FUN_100036c40(&local_48,local_48[1]);
            }
            FUN_100d30070(puVar3,&local_60,local_48 + ((int)local_48[2] + lVar7) * 2 + 4);
            if (*(int *)pQVar4 != -1) {
              if (*(int *)pQVar4 != 0) {
                LOCK();
                *(int *)pQVar4 = *(int *)pQVar4 + -1;
                local_31 = *(int *)pQVar4 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d2fea0;
              }
              QArrayData::deallocate(pQVar4,2,8);
            }
          }
          else {
            if (1 < *local_48) {
              FUN_100036c40(&local_48,local_48[1]);
            }
            QString::left((int)&local_68);
            if (1 < *local_48) {
              FUN_100036c40(&local_48,local_48[1]);
            }
            QString::mid((int)&local_70,(int)local_48 + 0x10 + (local_48[2] + (int)lVar7) * 8);
            FUN_100d30070(puVar3,&local_68,&local_70);
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d2fdda;
              }
              QArrayData::deallocate(local_70,2,8);
            }
LAB_100d2fdda:
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d2fea0;
              }
              QArrayData::deallocate(local_68,2,8);
            }
          }
        }
LAB_100d2fea0:
        lVar7 = lVar7 + 1;
        puVar5 = local_48;
      } while (lVar7 < (long)(int)local_48[3] - (long)(int)local_48[2]);
    }
  }
  FUN_100039a80(&local_48);
  return puVar3;
}

