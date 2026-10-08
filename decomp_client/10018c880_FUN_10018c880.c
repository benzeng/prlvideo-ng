
void FUN_10018c880(long param_1,uint param_2)

{
  void **ppvVar1;
  char cVar2;
  uint *puVar3;
  QString *pQVar4;
  long *plVar5;
  QArrayData *pQVar6;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  uint local_30;
  undefined1 local_29;
  
  local_30 = param_2;
  cVar2 = FUN_10011cdc0();
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0xd9) == '\0')) {
    *(undefined4 *)(param_1 + 0x48) = 0x30000001;
    return;
  }
  if (param_2 == 0x30000011) {
    local_30 = 0x30000006;
    param_2 = 0x30000006;
  }
  if (*(uint *)(param_1 + 0x48) == param_2) {
    return;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = param_2;
  ppvVar1 = (void **)(param_1 + 0x50);
  puVar3 = *(uint **)(param_1 + 0x50);
  if (10 < (int)(puVar3[3] - puVar3[2])) {
    if (1 < *puVar3) {
      FUN_100191560(ppvVar1,puVar3[1]);
      puVar3 = *ppvVar1;
      if (1 < *puVar3) {
        FUN_100191560(ppvVar1,puVar3[1]);
        puVar3 = *ppvVar1;
        if (1 < *puVar3) {
          FUN_100191560(ppvVar1,puVar3[1]);
          puVar3 = *ppvVar1;
        }
      }
    }
    if (*(void **)(puVar3 + (long)(int)puVar3[2] * 2 + 4) != (void *)0x0) {
      operator_delete(*(void **)(puVar3 + (long)(int)puVar3[2] * 2 + 4));
    }
    QListData::erase(ppvVar1);
  }
  FUN_100191200(ppvVar1,&local_30);
  if ((int)param_2 < 0x30000001) {
    if (param_2 == 0) {
      pQVar4 = (QString *)CMessageManager::instance();
      CVmConfiguration::getVmIdentification();
      CVmIdentification::getVmUuid();
      CMessageManager::clearMessageQueue(pQVar4);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10018c9cf;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_10018c9cf:
      if (*(char *)(param_1 + 0xb0) != '\0') {
        *(undefined1 *)(param_1 + 0xb0) = 0;
        FUN_100df99c0("","prl_client_app",0,"m_bIsMemorySwappingOn = %d",0);
        if (*(char *)(param_1 + 0xb0) == '\0') {
          FUN_100805600(param_1);
        }
        else {
          FUN_1008055e0(param_1);
        }
      }
      if (*(int *)(param_1 + 100) != 1) {
        *(undefined4 *)(param_1 + 100) = 1;
        FUN_100805240(param_1,1);
      }
    }
  }
  else {
    switch(param_2) {
    case 0x30000001:
      FUN_10018d260(param_1);
      if (*(char *)(param_1 + 0xb0) != '\0') {
        *(undefined1 *)(param_1 + 0xb0) = 0;
        FUN_100df99c0("","prl_client_app",0,"m_bIsMemorySwappingOn = %d",0);
        if (*(char *)(param_1 + 0xb0) == '\0') {
          FUN_100805600(param_1);
        }
        else {
          FUN_1008055e0(param_1);
        }
      }
      FUN_100805640(param_1);
      break;
    case 0x30000002:
    case 0x30000005:
      if (*(char *)(param_1 + 0xb1) == '\0') {
        if (*(int *)(param_1 + 0x48) != 0x3000000c) {
          FUN_100194400(param_1);
        }
        goto switchD_10018ca37_caseD_3000000d;
      }
      *(undefined1 *)(param_1 + 0xb1) = 0;
      FUN_100193200(param_1,0xc9);
      break;
    case 0x30000003:
      FUN_100805180(param_1,0);
      break;
    case 0x30000004:
      CVmConfiguration::getVmIdentification();
      CVmIdentification::getVmUuid();
      FUN_100116740(&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10018ce2d;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_10018ce2d:
      if (*(int *)(param_1 + 0x60) != 0x3000000d) {
        if ((*(long *)(param_1 + 0x90) == 0) ||
           (plVar5 = (long *)FUN_1007c65a0(), *(int *)(*plVar5 + 0xc) != *(int *)(*plVar5 + 8))) {
          FUN_100194c70(param_1);
        }
        else {
          FUN_10018a9e0(param_1);
        }
        FUN_100194400(param_1);
      }
      break;
    case 0x30000006:
      FUN_100805060(param_1,0);
      break;
    case 0x30000009:
      if (*(int *)(param_1 + 0x60) == 0x30000003) {
        FUN_10018d260(param_1);
      }
      break;
    case 0x3000000a:
      FUN_100805120(param_1,0);
      break;
    case 0x3000000d:
switchD_10018ca37_caseD_3000000d:
      if ((*(long *)(param_1 + 0x90) != 0) &&
         (plVar5 = (long *)FUN_1007c65a0(), *(int *)(*plVar5 + 0xc) == *(int *)(*plVar5 + 8))) {
        FUN_10018a9e0(param_1);
      }
      break;
    case 0x3000000f:
      FUN_1008051e0(param_1,0);
      break;
    case 0x30000010:
      FUN_1008050c0(param_1,0);
    }
  }
  if (*(int *)(param_1 + 0x48) != 0x3000000c) {
    *(undefined1 *)(param_1 + 0xb1) = 0;
  }
  if (*(int *)(param_1 + 0x60) == 0x30000003) {
    if ((param_2 | 8) != 0x30000009) {
      FUN_10018d260(param_1);
      FUN_10018a9e0(param_1);
      goto LAB_10018cad0;
    }
LAB_10018cae2:
    if (*(char *)(param_1 + 0xf0) != '\0') {
      *(undefined1 *)(param_1 + 0xf0) = 0;
      FUN_1008056f0(param_1,0);
    }
  }
  else {
LAB_10018cad0:
    if ((param_2 != 0x30000005) && (param_2 != 0x3000000c)) goto LAB_10018cae2;
  }
  EnumUtils::enumToString(&local_58,*(undefined4 *)(param_1 + 0x60));
  QString::toUpper();
  QString::toLocal8Bit();
  pQVar6 = local_48 + *(long *)(local_48 + 0x10);
  EnumUtils::enumToString(&local_70,*(undefined4 *)(param_1 + 0x48));
  QString::toUpper();
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Updating VM state: %s >>> %s",pQVar6,
                local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018cbb6;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10018cbb6:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018cbe6;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10018cbe6:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018cc16;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10018cc16:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018cc46;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10018cc46:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018cc76;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10018cc76:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018cca6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10018cca6:
  if ((*(uint *)(param_1 + 0xdc) & 2) != 0) {
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) & 0xfffffffd;
    FUN_1008049b0(param_1,2);
  }
  FUN_100804b40(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  FUN_10018c650(&local_80,param_1);
  FUN_100804ba0(param_1,&local_80,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018cd30;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10018cd30:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
  return;
}

