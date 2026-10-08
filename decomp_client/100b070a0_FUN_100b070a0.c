
void FUN_100b070a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
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
  QArrayData *local_58;
  QArrayData *local_50;
  int local_44;
  void *local_40;
  undefined1 local_31;
  
  local_40 = (void *)0x0;
  iVar1 = FUN_100b09ce0(&local_40,&local_44);
  if (iVar1 == 0) {
    if (1 < local_44) {
      lVar5 = 0;
      do {
        local_60 = (QArrayData *)QString::fromAscii_helper("%1 - %2",7);
        local_68 = (QArrayData *)QString::fromAscii_helper("Proxy CCID",10);
        QString::arg(&local_58,&local_60,&local_68,0,0x20);
        lVar3 = (long)(int)lVar5;
        pcVar4 = (char *)((long)local_40 + lVar3);
        iVar1 = -1;
        if (pcVar4 != (char *)0x0) {
          sVar2 = _strlen(pcVar4);
          iVar1 = (int)sVar2;
        }
        local_70 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar1);
        QString::arg(&local_50,&local_58,&local_70,0,0x20);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b071b7;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100b071b7:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b071ea;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_100b071ea:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b0721a;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100b0721a:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b0724a;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100b0724a:
        local_98 = (QArrayData *)QString::fromAscii_helper("%1@%2|%3|%4",0xb);
        local_a0 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@CCID",0xc);
        QString::arg(&local_90,&local_98,&local_a0,0,0x20);
        pcVar4 = (char *)((long)local_40 + lVar3);
        iVar1 = -1;
        if (pcVar4 != (char *)0x0) {
          sVar2 = _strlen(pcVar4);
          iVar1 = (int)sVar2;
        }
        local_a8 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar1);
        QString::arg(&local_88,&local_90,&local_a8,0,0x20);
        local_b0 = (QArrayData *)QString::fromAscii_helper("203a|fffa|full|--",0x11);
        QString::arg(&local_80,&local_88,&local_b0,0,0x20);
        pcVar4 = (char *)(lVar3 + (long)local_40);
        iVar1 = -1;
        if (pcVar4 != (char *)0x0) {
          sVar2 = _strlen(pcVar4);
          iVar1 = (int)sVar2;
        }
        local_b8 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar1);
        QString::arg(&local_78,&local_80,&local_b8,0,0x20);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b0738e;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100b0738e:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b073be;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100b073be:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b073f4;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_100b073f4:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b07424;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100b07424:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b0745a;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100b0745a:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b07490;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_100b07490:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b074c6;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_100b074c6:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b074fc;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100b074fc:
        FUN_100af2480(param_1,param_2,param_3,&local_78,&local_50,0xc);
        lVar5 = (long)(int)lVar5 + -1;
        do {
          lVar3 = lVar5;
          lVar5 = lVar3 + 1;
        } while (*(char *)((long)local_40 + lVar3 + 2) != '\0');
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b0756b;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100b0756b:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b0759b;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100b0759b:
        lVar5 = lVar3 + 3;
      } while ((int)(lVar3 + 1) + 3 < local_44);
    }
    if (local_40 != (void *)0x0) {
      _free(local_40);
    }
  }
  return;
}

