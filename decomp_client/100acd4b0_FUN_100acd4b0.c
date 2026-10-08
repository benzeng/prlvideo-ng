
void FUN_100acd4b0(long param_1,int param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100ad5e40(*(undefined8 *)(param_1 + 0x78));
  if (param_2 < 0x30000009) {
    if (param_2 != 0x30000001) {
      if ((param_2 != 0x30000005) || (*(char *)(param_1 + 0x81) == '\0')) goto LAB_100acd5f0;
      if (1 < DAT_10230ffd0) {
        FUN_100319410(&local_38,*(undefined8 *)(param_1 + 0x70));
        QString::toUtf8();
        FUN_100df99c0("CHRCLIENT","ChrToolClient",2,
                      "\'%s\' is paused while starting Coherence. Resuming!",
                      local_30 + *(long *)(local_30 + 0x10));
        if (*(int *)local_30 != -1) {
          if (*(int *)local_30 != 0) {
            LOCK();
            *(int *)local_30 = *(int *)local_30 + -1;
            local_21 = *(int *)local_30 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100acd582;
          }
          QArrayData::deallocate(local_30,1,8);
        }
LAB_100acd582:
        if (*(int *)local_38 != -1) {
          if (*(int *)local_38 != 0) {
            LOCK();
            *(int *)local_38 = *(int *)local_38 + -1;
            local_21 = *(int *)local_38 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100acd5b2;
          }
          QArrayData::deallocate(local_38,2,8);
        }
      }
LAB_100acd5b2:
      uVar1 = FUN_100319390(*(undefined8 *)(param_1 + 0x70));
      FUN_100192d10(uVar1,0x27f,0,0);
      goto LAB_100acd5f0;
    }
  }
  else if ((param_2 != 0x30000009) && (param_2 != 0x3000000b)) goto LAB_100acd5f0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_100ae0fb0(param_1,0);
LAB_100acd5f0:
  *(int *)(param_1 + 0x84) = param_2;
  return;
}

