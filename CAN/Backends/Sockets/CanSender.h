/*
 * CanSender.h
 *
 *  Created on: Apr 1, 2018
 *      Author: famez
 *      Implementation of can sender for the linux sockets layer
 */

#ifndef BACKENDS_SOCKETS_CANSENDER_H_
#define BACKENDS_SOCKETS_CANSENDER_H_

#include "../../CommonCanSender.h"

namespace Can {
namespace Sockets {



class CanSender : public CommonCanSender {
private:
	int mSock;

protected:
	void _sendFrame(const CanFrame& frame) const override;
	bool _initialize(std::string interface, u32 bitrate) override;
	bool _finalize() override;
public:
	CanSender();
	virtual ~CanSender();

};

} /* namespace Sockets */
} /* namespace Can */

#endif /* BACKENDS_SOCKETS_CANSENDER_H_ */
