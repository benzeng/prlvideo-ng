
void _xmlSetBufferAllocationScheme(xmlBufferAllocationScheme scheme)

{
  xmlBufferAllocationScheme *pxVar1;
  
  pxVar1 = ___xmlBufferAllocScheme();
  *pxVar1 = scheme;
  return;
}

