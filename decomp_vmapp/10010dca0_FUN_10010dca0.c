
void FUN_10010dca0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[2] != 0) {
      _CFRunLoopRemoveSource(*puVar1,puVar1[2],*(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8);
      _CFRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
      puVar1 = *(undefined8 **)(param_1 + 0x10);
    }
    if (-1 < *(int *)(puVar1 + 3)) {
      _close(*(int *)(puVar1 + 3));
      puVar1 = *(undefined8 **)(param_1 + 0x10);
    }
    if (puVar1[1] != 0) {
      _CFRunLoopRemoveSource(*puVar1,puVar1[1],*(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8);
      _CFRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
      puVar1 = *(undefined8 **)(param_1 + 0x10);
    }
    if (puVar1 != (undefined8 *)0x0) {
      operator_delete(puVar1);
      return;
    }
  }
  return;
}

