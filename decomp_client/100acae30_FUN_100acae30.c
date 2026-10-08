
void FUN_100acae30(long param_1)

{
  char cVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  cVar1 = FUN_100ad4290(*(undefined8 *)(param_1 + 0x78));
  if (cVar1 == '\0') {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "CoherenceToolClient: Invalid display configuration. Coherence Starting failed."
                   );
    }
    QTimer::stop();
    *(undefined1 *)(param_1 + 0x81) = 0;
    FUN_100ae0ef0(param_1,9);
    return;
  }
  FUN_100ad3070(&local_20,*(undefined8 *)(param_1 + 0x78));
  FUN_100acb230(param_1,1,local_20 + *(long *)(local_20 + 0x10),*(undefined4 *)(local_20 + 4));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return;
}

