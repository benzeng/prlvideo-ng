
void _xmlXPathRegisteredNsCleanup(long param_1)

{
  if (param_1 != 0) {
    _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x88),(xmlHashDeallocator)_xmlFree);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}

