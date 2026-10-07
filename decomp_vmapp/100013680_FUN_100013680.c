
void FUN_100013680(long param_1)

{
  do {
    QDomNode::~QDomNode((QDomNode *)(param_1 + 0x20));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_100013680();
    }
    param_1 = *(long *)(param_1 + 0x10);
  } while (param_1 != 0);
  return;
}

