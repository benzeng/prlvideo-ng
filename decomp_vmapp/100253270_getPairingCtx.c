
/* Function Stack Size: 0x10 bytes */

void * BTController::getPairingCtx(ID param_1,SEL param_2)

{
  return *(void **)(param_1 + _pairing_ctx);
}

