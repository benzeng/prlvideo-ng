
/* CBaseNode::CopyBase(CBaseNode const*) */

void __thiscall CBaseNode::CopyBase(CBaseNode *this,CBaseNode *param_1)

{
  if (param_1 != (CBaseNode *)0x0) {
    operator=(this,param_1);
    return;
  }
  return;
}

