
void _xmlSetNs(xmlNodePtr node,xmlNsPtr ns)

{
  if (node != (xmlNodePtr)0x0) {
    node->ns = ns;
  }
  return;
}

