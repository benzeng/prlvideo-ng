
/* Function Stack Size: 0x10 bytes */

int BTController::stopPairing(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = _pairing;
  puVar1 = PTR__objc_msgSend_100ba25e8;
  (*(code *)PTR__objc_msgSend_100ba25e8)
            (*(undefined8 *)(param_1 + _pairing),PTR_s_setDelegate__100bed290,0);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),PTR_s_release_100bed2a0);
  *(undefined8 *)(param_1 + lVar2) = 0;
  return 0;
}

