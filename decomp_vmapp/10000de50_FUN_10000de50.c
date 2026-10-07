
void FUN_10000de50(long param_1)

{
  (*(code *)PTR__objc_msgSend_100ba25e8)(*(undefined8 *)(param_1 + 0x48),PTR_s_release_100bed2a0);
  if (*(long *)(param_1 + 0x50) != 0) {
    _CFRelease();
  }
  (*(code *)PTR__objc_msgSend_100ba25e8)(*(undefined8 *)(param_1 + 0x40),PTR_s_drain_100bed2a8);
  return;
}

