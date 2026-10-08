
void _xmlDictFree(xmlDictPtr dict)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int local_34;
  undefined8 *local_30;
  undefined8 *local_18;
  
  if ((dict != (xmlDictPtr)0x0) && ((DAT_1023136b0 != 0 || (iVar3 = FUN_100975f04(), iVar3 != 0))))
  {
    _xmlRMutexLock(DAT_1023136a8);
    *(int *)dict = *(int *)dict + -1;
    if (*(int *)dict < 1) {
      _xmlRMutexUnlock(DAT_1023136a8);
      if (*(long *)(dict + 0x28) != 0) {
        _xmlDictFree(*(xmlDictPtr *)(dict + 0x28));
      }
      if (*(long *)(dict + 0x10) != 0) {
        local_34 = 0;
        while ((local_34 < *(int *)(dict + 0x18) && (0 < *(int *)(dict + 0x1c)))) {
          local_30 = (undefined8 *)(*(long *)(dict + 0x10) + (long)local_34 * 0x18);
          if (*(int *)((long)local_30 + 0x14) != 0) {
            bVar2 = true;
            while (local_30 != (undefined8 *)0x0) {
              puVar1 = (undefined8 *)*local_30;
              if (!bVar2) {
                (*(code *)_xmlFree)(local_30);
              }
              *(int *)(dict + 0x1c) = *(int *)(dict + 0x1c) + -1;
              bVar2 = false;
              local_30 = puVar1;
            }
          }
          local_34 = local_34 + 1;
        }
        (*(code *)_xmlFree)(*(undefined8 *)(dict + 0x10));
      }
      local_18 = *(undefined8 **)(dict + 0x20);
      while (local_18 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*local_18;
        (*(code *)_xmlFree)(local_18);
        local_18 = puVar1;
      }
      _xmlFreeRMutex(*(xmlRMutexPtr *)(dict + 8));
      (*(code *)_xmlFree)(dict);
    }
    else {
      _xmlRMutexUnlock(DAT_1023136a8);
    }
  }
  return;
}

