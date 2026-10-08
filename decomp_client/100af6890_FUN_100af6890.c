
void FUN_100af6890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *pQVar6;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x150);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      lVar5 = *plVar1;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      cVar2 = FUN_100af7230(param_1,*(undefined8 *)local_50);
      if (cVar2 != '\0') {
        CHwHardDisk::getDeviceName();
        QString::toUtf8();
        QCryptographicHash::hash(&local_70,&local_78,2);
        QByteArray::toHex();
        lVar5 = 0;
        pQVar6 = local_68 + *(long *)(local_68 + 0x10);
        if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_68 + 4) != 0)) {
          lVar5 = 0;
          do {
            if (pQVar6[lVar5] == (QArrayData)0x0) break;
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < *(uint *)(local_68 + 4));
        }
        local_60 = (QArrayData *)QString::fromAscii_helper((char *)pQVar6,(int)lVar5);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6a16;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_100af6a16:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6a46;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_100af6a46:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6a76;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_100af6a76:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6aa6;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100af6aa6:
        local_b0 = (QArrayData *)QString::fromAscii_helper("%1@%2|%3|%4@%5",0xe);
        local_b8 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MSC",0xb);
        QString::arg(&local_a8,&local_b0,&local_b8,0,0x20);
        QString::arg(&local_a0,&local_a8,&local_60,0,0x20);
        local_c0 = (QArrayData *)QString::fromAscii_helper("203a|fff7|unknown|--",0x14);
        QString::arg(&local_98,&local_a0,&local_c0,0,0x20);
        QString::arg(&local_90,&local_98,&local_60,0,0x20);
        CHwHardDisk::getDeviceId();
        QString::arg(&local_88,&local_90,&local_c8,0,0x20);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6bcb;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_100af6bcb:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6c01;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_100af6c01:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6c37;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100af6c37:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6c6d;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100af6c6d:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6ca3;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_100af6ca3:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6cd9;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100af6cd9:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6d0f;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100af6d0f:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6d45;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_100af6d45:
        CHwHardDisk::getDeviceName();
        FUN_100af2480(param_1,param_2,param_3,&local_88,&local_d0,0xd);
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6da8;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_100af6da8:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6dd8;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100af6dd8:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af6e10;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
LAB_100af6e10:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

