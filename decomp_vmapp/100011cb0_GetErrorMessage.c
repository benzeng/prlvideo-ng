
/* CBaseNode::GetErrorMessage() const */

void CBaseNode::GetErrorMessage(void)

{
  int *piVar1;
  long in_RSI;
  undefined8 *in_RDI;
  
  piVar1 = *(int **)(in_RSI + 0x30);
  *in_RDI = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

