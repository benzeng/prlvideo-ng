
void _xmlXPathRegisteredFuncsCleanup(long param_1)

{
  if (param_1 != 0) {
    _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x38),(xmlHashDeallocator)0x0);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

