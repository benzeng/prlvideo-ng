
xmlBufferAllocationScheme _xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme v)

{
  xmlBufferAllocationScheme xVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  xVar1 = DAT_102279454;
  DAT_102279454 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return xVar1;
}

