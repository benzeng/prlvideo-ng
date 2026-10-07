
/* Function Stack Size: 0x20 bytes */

void BTController::setPairingCallback_context_
               (ID param_1,SEL param_2,undefined4 *param_3,void *param_4)

{
  *(undefined4 **)(param_1 + _pairing_cb) = param_3;
  *(void **)(param_1 + _pairing_ctx) = param_4;
  return;
}

