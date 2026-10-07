
void FUN_1002374f5(long param_1,long param_2,xmlChar *param_3)

{
  long lVar1;
  void *pvVar2;
  long local_10;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == 0) {
    FUN_10022d5a6(param_2,*(undefined8 *)(param_1 + 8),1,
                  "Internal error: no grammar in CheckReference %s\n",param_3,0);
  }
  else if (*(long *)(param_1 + 0x30) == 0) {
    if (*(long *)(lVar1 + 0x30) == 0) {
      FUN_10022d5a6(param_2,*(undefined8 *)(param_1 + 8),0x44d,
                    "Reference %s has no matching definition\n",param_3,0);
    }
    else {
      pvVar2 = _xmlHashLookup(*(xmlHashTablePtr *)(lVar1 + 0x30),param_3);
      local_10 = param_1;
      if (pvVar2 == (void *)0x0) {
        FUN_10022d5a6(param_2,*(undefined8 *)(param_1 + 8),0x44d,
                      "Reference %s has no matching definition\n",param_3,0);
      }
      else {
        for (; local_10 != 0; local_10 = *(long *)(local_10 + 0x58)) {
          *(void **)(local_10 + 0x30) = pvVar2;
        }
      }
    }
  }
  else {
    FUN_10022d5a6(param_2,*(undefined8 *)(param_1 + 8),1,
                  "Internal error: reference has content in CheckReference %s\n",param_3,0);
  }
  return;
}

