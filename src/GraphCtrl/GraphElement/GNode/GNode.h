/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: GNode.h
@Time: 2021/6/1 10:13 下午
@Desc: 
***************************/

#ifndef CGRAPH_GNODE_H
#define CGRAPH_GNODE_H

#include "../GElement.h"
#include "../../GraphParam/GParamManager.h"

class GNode : public GElement {
protected:
    explicit GNode();
    ~GNode() override;

private:
    GNode(const GNode& node);
    GNode& operator=(const GNode& node);

    CSTATUS process(bool isMock) override;
    CSTATUS beforeRun() override;
    CSTATUS afterRun() override;

    friend class GPipeline;
};

using GNodePtr = GNode *;
using GNodePtrArr = std::vector<GNodePtr>;


#endif //CGRAPH_GNODE_H
