
/* Function Stack Size: 0x10 bytes */

bool BTController::getIsPaired(ID param_1,SEL param_2)

{
  return (bool)CONCAT71((int7)((ulong)_is_paired >> 8),*(undefined1 *)(param_1 + _is_paired));
}

