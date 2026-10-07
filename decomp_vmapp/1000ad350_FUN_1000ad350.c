
undefined4 FUN_1000ad350(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined4 unaff_R13D;
  bool bVar6;
  bool *local_58;
  char local_49;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar1 = *(long *)(param_1 + 0x1a30);
  if (lVar1 == 0) {
    pcVar5 = "Ballooning isn\'t available for this guest";
  }
  else {
    lVar4 = *param_2;
    if (*(int *)(lVar4 + 8) != *(int *)(lVar4 + 0xc)) {
      local_58 = (bool *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
      do {
        local_40 = *(QArrayData **)local_58;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        iVar3 = 4;
        if (*(int *)(local_40 + 4) != 0) {
          local_48 = (QArrayData *)QString::fromAscii_helper("set",3);
          iVar3 = QString::compare(&local_40,&local_48,1);
          if (iVar3 == 0) {
            local_58 = local_58 + 8;
            bVar6 = local_58 != (bool *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
          }
          else {
            bVar6 = false;
          }
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000ad43e;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_1000ad43e:
          iVar3 = 0;
          if (bVar6) {
            local_49 = '\0';
            lVar4 = QString::toULong(local_58,(int)&local_49);
            if (local_49 == '\0') {
              FUN_1008e3970("","vm",0,
                            "Invalid argument for --set, expected size of balloon in megabytes");
              unaff_R13D = 0x80000009;
              iVar3 = 1;
            }
            else {
              cVar2 = FUN_100533970(lVar1,lVar4 << 0x14);
              unaff_R13D = 0;
              iVar3 = 1;
              if ((cVar2 == '\0') && (*(char *)(lVar1 + 0x11) != '\0')) {
                unaff_R13D = 0x80000009;
                FUN_1008e3970("","vm",0,"Can\'t set size for memory balloon");
              }
            }
          }
        }
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000ad510;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_1000ad510:
        if (iVar3 == 1) {
          return unaff_R13D;
        }
      } while ((iVar3 != 4) &&
              (local_58 = local_58 + 8,
              local_58 != (bool *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8)));
    }
    pcVar5 = "Invalid ballooning command format";
  }
  FUN_1008e3970("","vm",0,pcVar5);
  return 0x80000009;
}

